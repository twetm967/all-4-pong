#ifndef STARTUP_H
#define STARTUP_H

#include <QMainWindow>
#include <QTcpSocket>

namespace Ui {
class Startup;
}

class Startup : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Startup(QWidget *parent = 0);
    ~Startup();
private slots:
    void on_btnConnect_clicked();
    void dataReceived();
    void serverDisconnected();
    void onTick();

    
private:
    Ui::Startup *ui;
};

#endif // STARTUP_H
