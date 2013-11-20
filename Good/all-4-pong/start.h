#ifndef START_H
#define START_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDateTime>
#include <QTcpServer>
#include <QDebug>
#include <QTimer>
#include <iostream>
#include <fstream>


#include "World.h"
#include "Paddle.h"
#include "ingame.h"

namespace Ui {
class Start;
}

class Start : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Start(QWidget *parent = 0);
    ~Start(){}

    //*******Getters*********************
    int getPlayers(){return players;}
    int getDifficulty(){return difficulty;}
    bool getPowerUps() {return powerUps;}
  //  InGame* getInGame() { return gameScreen;}
    void StartingMethod();
    void setSound(bool inSound){sound = inSound;}
    
private slots:
    int on_start_Btn_clicked();
    void on_btnLoad_clicked();
    void clientConnected();
    void dataReceived();
    void clientDisconnected();
    void enoughPlayers();
    void timerHit();


    void on_players_comboBox_activated(int index);

private:
    Ui::Start *ui;
    QTcpServer* server;
    int connectCount;
    int players;
    int difficulty;
    bool powerUps;
    QTimer *timer;
    bool ok;
    InGame* gameScreen;
    int clock;
    bool sound;


};

#endif // START_H
