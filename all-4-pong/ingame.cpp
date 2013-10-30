#include "ingame.h"
#include "ui_ingame.h"
#include "World.h"

#include <vector>
#include <QPalette>
#include <QBrush>
#include <QColor>

#include <QMouseEvent>
#include <QtWidgets>

/*
#include "Paddle.h"
#include "World.h"
*/


#include "Paddle.h"
#include "Objects.h"
#include "GameLabel.h"
#include "Timer.h"


InGame::InGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InGame)
{
    ui->setupUi(this);

    //Timer============================
    timer = new QTimer(this);
    timer->setInterval(75);
    connect(timer, &QTimer::timeout,this, & InGame::Animate);

    setMouseTracking(true);
ui->gameCourt->setMouseTracking(true);
    Players = World::getInstance().getGamePlayers();


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



    //for testing
    i = 6;
    timer->start();

    //Link Game Model to GUI - Commented out lines cause segfaults.  Yay! - PJ
    ui->gameCourt->findChild<GameLabel*>("lblPaddleBottom")->initializeObj("Paddle");
//    ui->gameCourt->findChild<GameLabel*>("lblPaddleBottom")->getObj()->setPlayerId(0);
    ui->gameCourt->findChild<GameLabel*>("lblPaddleRight")->initializeObj("Paddle");
//    ui->gameCourt->findChild<GameLabel*>("lblPaddleRight")->getObj()->setPlayerId(1);
    ui->gameCourt->findChild<GameLabel*>("lblPaddleTop")->initializeObj("Paddle");
//    ui->gameCourt->findChild<GameLabel*>("lblPaddleTop")->getObj()->setPlayerId(2);
    ui->gameCourt->findChild<GameLabel*>("lblPaddleLeft")->initializeObj("Paddle");
//    ui->gameCourt->findChild<GameLabel*>("lblPaddleLeft")->getObj()->setPlayerId(3);
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
    if(health > -1){
    QLabel* lbl = Health.at(spot + health);
    lbl->setStyleSheet("background-color: rgb(0, 0, 0); border-radius: 10px;");
}else {
        qDebug() << "No more death possible";
    }
 //then we would have to figure out how to actually change the label color.
    // but this should access the right label.
}

 //Pauses the game but right now running health bar tests.
void InGame::on_btnPause_clicked()
{
   HealthDamage(0,i);
   HealthDamage(1,i);
   HealthDamage(2,i);
   HealthDamage(3,i);
   i--;
   Timer::getInstance()->getTimer()->stop();
}

QPoint InGame::getGameCourt(QPoint in){
    QPoint out = ui->gameCourt->mapFromParent(in);
    return out;
}

void InGame::mouseMoveEvent(QMouseEvent *ev) {
  // vector<children> Childs = ui->gameCourt->children();


    Paddle* pad = Players.at(0)->getPaddle();

 // pad->Move(getGameCourt(ev->pos()));
    pad->setMouse(getGameCourt(ev->pos()));
 // pad->setX(getGameCourt(ev->pos()).x());
  //pad->setY(420);
}

//every clock tick animates the game.
void InGame::Animate(){

   // for(int i = 0; i < Players.size(); i++){
        Paddle* pad = Players.at(0)->getPaddle();


       int x = pad->getX();
       int y = pad->getY();

  //     qDebug() << x << ", " << y;
//this will eventually iterate through an array.
       ui->lblPaddleBottom->move(x,420);

    //}

}

void InGame::timerHit() {
    foreach (GameLabel *g, ui->gameCourt->findChildren<GameLabel*>()) {
        g->updatePosition();
     }

}



















