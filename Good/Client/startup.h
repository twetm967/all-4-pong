#ifndef STARTUP_H
#define STARTUP_H

#include <QMainWindow>
#include <QTcpSocket>
#include <vector>
#include <QString>
#include <QTimer>
#include <QMouseEvent>
#include <clientingame.h>

using namespace std;
namespace Ui {
class Startup;
}

class Startup : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Startup(QWidget *parent = 0);
    ~Startup();

    //void mouseMoveEvent(QMouseEvent *ev);

    vector<QString>* split(QString, char);
private slots:

    void dataReceived();
    void serverDisconnected();
    void timerHit();
    void wait();

    
    void on_connect_Btn_clicked();



private:
    Ui::Startup *ui;
    QTcpSocket* socket;
    QTimer *timer;
    QTimer *random;
    QString side;
    QString username;
    clientingame *clientgame;
    bool ok;
    int clock;

};

#endif // STARTUP_H
