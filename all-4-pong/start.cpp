#include <QMessageBox>
#include <QDateTime>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QApplication>
#include <ingame.h>
#include "ui_ingame.h"


#include "start.h"
#include "ui_start.h"

Start::Start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Start),
    connectCount(0)
{
    ui->setupUi(this);
    server = new QTcpServer(this);

    connect(server, &QTcpServer::newConnection, this, &Start::clientConnected);
    if (!server->listen(QHostAddress::Any, 5000)) {
        QMessageBox::critical(this, "Uh oh", "Cannot start socket.");
        exit(1);

}
}


//this method detects when a new client is connected and increments the connected count
void Start::clientConnected()
{
    QTcpSocket *sock = server->nextPendingConnection();
    connect(sock, &QTcpSocket::disconnected, this, &Start::clientDisconnected);
    connect(sock, &QTcpSocket::readyRead, this, &Start::dataReceived);
    ++connectCount;
    QString str;
    if (connectCount == ui->players_comboBox->currentIndex()+1){
        ui->start_Btn->setEnabled(true);
    }else{
        ui->start_Btn->setEnabled(false);
    }

    ui->lblConnected->setText(QString::number(connectCount));
}

//recieves x,y,and paddle id from user
void Start::dataReceived()


{

    //}
    //**********This is Schaub code that we can use as an example****************
    /*QTcpSocket *sock = dynamic_cast<QTcpSocket*>(sender());

    addToLog("Received data from socket ");
    while (sock->canReadLine()) {
        QString str = sock->readLine();
        addToLog("-> " + str);

        // send data to all connected clients
        for (QObject *obj : server->children()) {
            QTcpSocket *anotherSock = dynamic_cast<QTcpSocket*>(obj);
            if (anotherSock != NULL)
                anotherSock->write(str.toLocal8Bit());
        }

    }*/
}


//detects when a user disconnects and decrements the connectCount
void Start::clientDisconnected()
{
    QTcpSocket *sock = dynamic_cast<QTcpSocket*>(sender());
    sock->deleteLater();
    --connectCount;
    //ui->lblConnected->setText(QString::number(connectCount));
    //addToLog("Client disconnected.");
}


//this method will launch the actual game. this button is only activated when there are the
//correct number of players connected. That number is determined by the players combobox.
int Start::on_start_Btn_clicked()
{//"/home/user/csunix/dreck410/team/build-all-4-pong-Desktop-Debug/all-4-pong"

  // int argc = 1;
 //  char* argv["/home/user/csunix/dreck410/team/build-all-4-pong-Desktop-Debug/all-4-pong"];


   //Oh-No the user pressed the start button and there is no game yet!!! ahhhh fix it. Go.
    InGame gameScreen;
    this->hide();
 // QApplication a(argc, argv);
    gameScreen.show();

 //return a.exec();

}
