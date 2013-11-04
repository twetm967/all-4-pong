#ifndef STARTUP_H
#define STARTUP_H

#include <QMainWindow>
#include <QTcpSocket>
#include <vector>
#include <QString>

namespace Ui {
class Startup;
}

class Startup : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Startup(QWidget *parent = 0);
    ~Startup();

     vector<QString> split(QString, char);
private slots:

    void dataReceived();
    void serverDisconnected();
    void onTick();

    
    void on_connect_Btn_clicked();

private:
    Ui::Startup *ui;
    QTcpSocket* socket;
};

#endif // STARTUP_H
