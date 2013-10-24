#include <QMessageBox>
#include <QDateTime>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>

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
    if (!server->listen(QHostAddress::Any, 5001)) {
        QMessageBox::critical(this, "Uh oh", "Cannot start socket.");
        exit(1);

}
}


void Start::clientConnected()
{
    QTcpSocket *sock = server->nextPendingConnection();
    connect(sock, &QTcpSocket::disconnected, this, &Start::clientDisconnected);
    connect(sock, &QTcpSocket::readyRead, this, &Start::dataReceived);
    ++connectCount;
    ui->lblConnected->setText(QString::number(connectCount));
}

//recieves x,y,and paddle id from user
void Start::dataReceived()
{
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

void Start::clientDisconnected()
{
    QTcpSocket *sock = dynamic_cast<QTcpSocket*>(sender());
    sock->deleteLater();
    --connectCount;
    //ui->lblConnected->setText(QString::number(connectCount));
    //addToLog("Client disconnected.");
}



void Start::on_start_Btn_clicked()
{
    //Oh-No the user pressed the start button and there is no game yet!!! ahhhh fix it. Go.


}
