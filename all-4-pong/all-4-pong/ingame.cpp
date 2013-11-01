#include "ingame.h"
#include "ui_ingame.h"
#include "World.h"

#include <vector>
#include <QPalette>
#include <QBrush>
#include <QColor>

#include <QMouseEvent>
#include <QtWidgets>


#include "Paddle.h"
#include "Object.h"
#include "GameLabel.h"
#include "Timer.h"


InGame::InGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InGame)
{
    ui->setupUi(this);

    //Timer============================
   /* timer = new QTimer(this);
    timer->setInterval(75);
    connect(timer, &QTimer::timeout,this, & InGame::Animate);
*/
    setMouseTracking(true);
ui->gameCourt->setMouseTracking(true);
   // Players = World::getInstance()->getGamePlayers();




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

    //for testing
    i = 6;

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
   // connect(Timer::getInstance()->getTimer(), &QTimer::timeout,this,&InGame::Animate);



}



InGame::~InGame()
{


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

}

 //Pauses the game but right now running health bar tests.
void InGame::on_btnPause_clicked()
{
    if(Timer::getInstance()->getTimer()->isActive()){
   Timer::getInstance()->getTimer()->stop();
   ui->btnPause->setText("Play");
    }else{
        Timer::getInstance()->getTimer()->start();
         ui->btnPause->setText("Pause");
    }
}



void InGame::on_btnCheat_clicked()
{
    HealthDamage(0,i);
    HealthDamage(1,i);
    HealthDamage(2,i);
    HealthDamage(3,i);
    i--;
}


QPoint InGame::getGameCourt(QPoint in){
    QPoint out;
    out = ui->gameCourt->mapFromParent(in);

    return out;
}

void InGame::mouseMoveEvent(QMouseEvent *ev) {
    QPoint here = getGameCourt((ev->pos()));
    World::getInstance()->setworldMouse(here);

}
//for testing purposes
void InGame::mousePressEvent(QMouseEvent *ev){
   // qDebug() << getGameCourt(ev->pos()).x() << ", "<< getGameCourt(ev->pos()).y() << "  ------------------------------";
}



void InGame::timerHit() {
    foreach (GameLabel *g, ui->gameCourt->findChildren<GameLabel*>()) {
        g->updatePosition();
     }

}


















