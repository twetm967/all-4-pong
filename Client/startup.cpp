#include "startup.h"
#include "ui_startup.h"
#include "clientingame.h"
#include "QMessageBox"
#include <QTcpSocket>
#include <QTcpServer>
#include <vector>
#include <QString>
#include <QMouseEvent>


Startup::Startup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Startup)
{
    ui->setupUi(this);
    clientgame = new clientingame();

    timer = new QTimer(this);
    timer->setInterval(100);
    connect(timer, &QTimer::timeout, this, &Startup::timerHit);

    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead, this, &Startup::dataReceived);
    connect(socket, &QTcpSocket::disconnected, this, &Startup::serverDisconnected);
}

Startup::~Startup()
{
    delete ui;
}

void Startup::on_connect_Btn_clicked()
{
    QString hostname = ui->IP_line->text();
    if (hostname.size() == 0) {
        QMessageBox::critical(this, "Uh oh", "Please specify name of chat server.");
        return;
    }
    socket->connectToHost(hostname, 5000);
    if (!socket->waitForConnected())  {
        QMessageBox::critical(this, "Uh oh", "Unable to connect to server.");
        return;
    }
    ui->connect_Btn->setText("Connected");
    ui->connect_Btn->setEnabled(false);


    timer->start();
    //username = ui->username_line->text();
    //socket->write(str.toLocal8Bit());
    //ui->statusBar->showMessage("Connected.");
    //ui->connect_Btn->setEnabled(false);
}




vector<QString> *Startup::split(QString str, char delim){
    //vector<QString> Split(string str, char delim){
    vector<QString> *splitV = new vector<QString>();
    QString buf = "";
    int i = 0;
    while (i < str.length()){
        if (str[i] != delim){
            buf += str[i];
        } else if (buf.length() > 0) {
            splitV->push_back(buf);
            buf = "";
        }
        i++;
    }
    if (!buf.isEmpty())
        splitV->push_back(buf);
    return splitV;
}




void Startup::dataReceived() {

    while (socket->canReadLine()) {
        QString str = socket->readLine();
        //this will recieve a string of the a list of objects with their x and y coordinates
        //For example, ball,
        vector<QString> *spaceSplit = split(str, ' ');
        //vector<QString> *spaceSplit = str.split(' ');
        while(spaceSplit->size() > 0){
            vector<QString> *slashSplit = split(spaceSplit->at(0), '/');
            if(slashSplit->at(0) == "start\n"){
                clientgame->show();
                this->hide();
            }
            if(slashSplit->at(0) == "side"){
                side = slashSplit->at(1);
            }
            spaceSplit->erase(spaceSplit->begin()+0);
            clientgame->MoveLabels(slashSplit);
        }
    }
}

void Startup::serverDisconnected()
{
    ui->statusBar->showMessage("Disconnected.");
    //  ui->btnConnect->setEnabled(true);
    QMessageBox::critical(clientgame, "Error","The server has disconnected." );
    clientgame->close();
    this->show();
}

//this is called every clock tick and sends the paddle x, y, and ID
void Startup::timerHit()
{
    QString str =  side + "/" + ui->username_line->text() + "/" + QString::number(clientgame->getX()) + '/' + QString::number(clientgame->getY()) + '/'+ "\n";
    socket->write(str.toLocal8Bit());

    //This is the Schaub code for the chat client.
    /*QString username = ui->lineUsername->text();
    QString msg;
    if (username.size() > 0) {
        msg = username + ":" + ui->txtMessage->toPlainText() + "\n";
    } else {
        msg = ui->txtMessage->toPlainText() + "\n";
    }

    ui->txtMessage->document()->setPlainText("");

    socket->write(msg.toLocal8Bit());


    ui->txtMessage->setFocus();*/
}




void Startup::on_connect_Btn_2_clicked()
{

}
