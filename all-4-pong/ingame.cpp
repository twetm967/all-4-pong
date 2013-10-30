#include "ingame.h"

#include "ui_ingame.h"
#include <vector>
#include <QPalette>
#include <QBrush>
#include <QColor>
#include "Paddle.h"
#include "Objects.h"
#include "GameLabel.h"
#include "Timer.h"

InGame::InGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InGame)
{
    ui->setupUi(this);



    //This is kind fo ridiculous looking but it adds all of the
    //health buttons into a vector taht way they are accessible by index.
    // this is how it works
    // 0 - 6 is player 0 ( bottom)
    // 7 - 13 is player 1 (left)
    // 14 - 20 is player 2 (top)
    // 21 - 27 is player 3 (right)
    //I'm thinking it would be Index * 7 == players spot. then you can
    // do an iterator off of that.

    //Player 0
    Health.push_back(ui->lblLife1PB);
    Health.push_back(ui->lblLife2PB);
    Health.push_back(ui->lblLife3PB);
    Health.push_back(ui->lblLife4PB);
    Health.push_back(ui->lblLife5PB);
    Health.push_back(ui->lblLife6PB);
    Health.push_back(ui->lblLife7PB);
    // player 1
    Health.push_back(ui->lblLife1PL);
    Health.push_back(ui->lblLife2PL);
    Health.push_back(ui->lblLife3PL);
    Health.push_back(ui->lblLife4PL);
    Health.push_back(ui->lblLife5PL);
    Health.push_back(ui->lblLife6PL);
    Health.push_back(ui->lblLife7PL);
    //player 2
    Health.push_back(ui->lblLife1PT);
    Health.push_back(ui->lblLife2PT);
    Health.push_back(ui->lblLife3PT);
    Health.push_back(ui->lblLife4PT);
    Health.push_back(ui->lblLife5PT);
    Health.push_back(ui->lblLife6PT);
    Health.push_back(ui->lblLife7PT);
    //player 3
    Health.push_back(ui->lblLife1PR);
    Health.push_back(ui->lblLife2PR);
    Health.push_back(ui->lblLife3PR);
    Health.push_back(ui->lblLife4PR);
    Health.push_back(ui->lblLife5PR);
    Health.push_back(ui->lblLife6PR);
    Health.push_back(ui->lblLife7PR);


    //Link Game Model to GUI
    ui->gameCourt->findChild<GameLabel*>("lblPaddleBottom")->initializeObj("Paddle");
    ui->gameCourt->findChild<GameLabel*>("lblPaddleBottom")->getObj()->setPlayerId(0);
    ui->gameCourt->findChild<GameLabel*>("lblPaddleRight")->initializeObj("Paddle");
    ui->gameCourt->findChild<GameLabel*>("lblPaddleRight")->getObj()->setPlayerId(1);
    ui->gameCourt->findChild<GameLabel*>("lblPaddleTop")->initializeObj("Paddle");
    ui->gameCourt->findChild<GameLabel*>("lblPaddleTop")->getObj()->setPlayerId(2);
    ui->gameCourt->findChild<GameLabel*>("lblPaddleLeft")->initializeObj("Paddle");
    ui->gameCourt->findChild<GameLabel*>("lblPaddleLeft")->getObj()->setPlayerId(3);
    ui->gameCourt->findChild<GameLabel*>("lblBall")->initializeObj("Ball");

    //Start the Timer
    Timer::getInstance()->getTimer()->setInterval(100);
    connect(Timer::getInstance()->getTimer(), &QTimer::timeout,this,&InGame::timerHit);
    Timer::getInstance()->getTimer()->start();
}



InGame::~InGame()
{
    for(int i = 0; i < Players.size(); i++){
        delete Players.at(i);
        Players.erase(Players.begin() + i);
    }

delete ui;
}

//this is called by the World class for when a player is damaged this is to change the
// graphic!
void InGame::HealthDamage(int index, int health){
    int spot = 7 * index;

    QLabel* lbl = Health.at(spot + health);
    lbl->setStyleSheet("background-color: rgb(0, 0, 0); border-radius: 10px;");

 //then we would have to figure out how to actually change the label color.
    // but this should access the right label.
}

 //Pauses the game but right now running health bar tests.
void InGame::on_btnPause_clicked()
{
   HealthDamage(0,6);
   HealthDamage(1,6);
   HealthDamage(2,6);
   HealthDamage(3,6);
   Timer::getInstance()->getTimer()->stop();
}

void InGame::timerHit() {
    foreach (GameLabel *g, ui->gameCourt->findChildren<GameLabel *>()) {
        g->updatePosition();
    }
}
