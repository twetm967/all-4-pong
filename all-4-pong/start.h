#ifndef START_H
#define START_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDateTime>
#include <QTcpServer>
#include <QDebug>

namespace Ui {
class Start;
}

class Start : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Start(QWidget *parent = 0);
    ~Start(){/*delete ui?*/}
    
private slots:
    int on_start_Btn_clicked();
    void clientConnected();
    void dataReceived();
    void clientDisconnected();


private:
    Ui::Start *ui;

    QTcpServer* server;
    int connectCount;
};

#endif // START_H
