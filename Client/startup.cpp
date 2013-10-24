#include "startup.h"
#include "ui_startup.h"
#include "QMessageBox"
#include <QTcpSocket>
#include <QTcpServer>


Startup::Startup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Startup)
{
    ui->setupUi(this);

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

    //ui->statusBar->showMessage("Connected.");
    //ui->connect_Btn->setEnabled(false);
}


void Startup::dataReceived() {

    while (socket->canReadLine()) {
        QString str = socket->readLine();
        //this will recieve a string of the a list of objects with their x and y coordinates
        //For example, ball,
    }
}

void Startup::serverDisconnected()
{
     ui->statusBar->showMessage("Disconnected.");
   //  ui->btnConnect->setEnabled(true);
}

//this is called every clock tick and sends the paddle x, y, and ID
void Startup::onTick()
{
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



