#include "ingame.h"
#include "ui_ingame.h"


#include <vector>
#include <QPalette>
#include <QBrush>
#include <QColor>

#include <QMouseEvent>
#include <QtWidgets>

#include "World.h"
#include "Paddle.h"
#include "Object.h"
#include "GameLabel.h"
#include "Timer.h"
#include "start.h"


InGame::InGame(Start* window, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InGame),
    home(window)
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
    Health.push_back(ui->lblLife1PR);
    Health.push_back(ui->lblLife2PR);
    Health.push_back(ui->lblLife3PR);
    Health.push_back(ui->lblLife4PR);
    Health.push_back(ui->lblLife5PR);
    Health.push_back(ui->lblLife6PR);
    Health.push_back(ui->lblLife7PR);
    //player 2
    Health.push_back(ui->lblLife1PT);
    Health.push_back(ui->lblLife2PT);
    Health.push_back(ui->lblLife3PT);
    Health.push_back(ui->lblLife4PT);
    Health.push_back(ui->lblLife5PT);
    Health.push_back(ui->lblLife6PT);
    Health.push_back(ui->lblLife7PT);
    //player 3
    Health.push_back(ui->lblLife1PL);
    Health.push_back(ui->lblLife2PL);
    Health.push_back(ui->lblLife3PL);
    Health.push_back(ui->lblLife4PL);
    Health.push_back(ui->lblLife5PL);
    Health.push_back(ui->lblLife6PL);
    Health.push_back(ui->lblLife7PL);



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
    Timer::getInstance()->getTimer()->setInterval(50);//was100
    connect(Timer::getInstance()->getTimer(), &QTimer::timeout,this,&InGame::timerHit);
   // connect(Timer::getInstance()->getTimer(), &QTimer::timeout,this,&InGame::Animate);



}



InGame::~InGame() {
    delete ui;
}

//this is called by the World class for when a player is damaged this is to change the
// graphic!
void InGame::HealthDamage(int index, int health){
    int spot = 7 * index;
    --health;
    if(health > -1 && health < 7){
        QLabel* lbl = Health.at(spot + health);
        lbl->setStyleSheet("background-color: rgb(0, 0, 0); border-radius: 10px;");
    }
    else if (health < 0) {
        qDebug() << "No more death possible";
    }
}

 //Pauses the game but right now running health bar tests.
void InGame::on_btnPause_clicked() {
    World::getInstance()->setRoundFinished(false);
    if (ui->btnPause->text() == "Pause") {
        Timer::getInstance()->getTimer()->stop();
        ui->btnPause->setText("Play");
    }

    else if (ui->btnPause->text() == "Play") {
        Timer::getInstance()->getTimer()->start();
        ui->btnPause->setText("Pause");
    }
}



void InGame::on_btnCheat_clicked() {
    for (int i = 0; i < 4; ++i) {
        World::getInstance()->getGamePlayer(i)->damage();
        HealthDamage(i,World::getInstance()->getGamePlayer(i)->getHealth()+1);
    }
}


QPoint InGame::getGameCourt(QPoint in) {
    QPoint out;
    out = ui->gameCourt->mapFromParent(in);

    return out;
}

void InGame::mouseMoveEvent(QMouseEvent *ev) {
    World::getInstance()->setworldMouse(this->getGameCourt(ev->pos()));
}

//for testing purposes
void InGame::mousePressEvent(QMouseEvent *ev) {
   // qDebug() << getGameCourt(ev->pos()).x() << ", "<< getGameCourt(ev->pos()).y() << "  ------------------------------";
    QPoint p =this->getGameCourt(ev->pos());
    if(p.x() > 0 && p.x() < 450 && p.y() > 0 && p.y() < 450){
    World::getInstance()->setRoundFinished(false);
    if (ui->btnPause->text() == "Pause") {
        Timer::getInstance()->getTimer()->stop();
        ui->btnPause->setText("Play");
    }

    else if (ui->btnPause->text() == "Play") {
        Timer::getInstance()->getTimer()->start();
        ui->btnPause->setText("Pause");
    }
    }
}



void InGame::timerHit() {
    World::getInstance()->UpdateWorld();
    foreach (GameLabel *g, ui->gameCourt->findChildren<GameLabel*>()) {
        g->updatePosition();
    }
    if (World::getInstance()->getRoundFinished() == true) {
        World::getInstance()->pointScoredReset();
        Timer::getInstance()->getTimer()->stop();
        ui->lblGameDeclaration->setText("Round Over"); // display 'Round Over' declaration
        ui->lblPlayDeclaration->setText("Press Play to Continue"); // display pressPlay instructions
        ui->btnPause->setText("Play");
        ui->lblScorePB->setText(QString::number(World::getInstance()->getGamePlayer(0)->getCurrentScore()->getCurrentScore()));
        ui->lblScorePR->setText(QString::number(World::getInstance()->getGamePlayer(1)->getCurrentScore()->getCurrentScore()));
        ui->lblScorePT->setText(QString::number(World::getInstance()->getGamePlayer(2)->getCurrentScore()->getCurrentScore()));
        ui->lblScorePL->setText(QString::number(World::getInstance()->getGamePlayer(3)->getCurrentScore()->getCurrentScore()));
        for (int i = 0; i < 4; ++i) {
            HealthDamage(i,World::getInstance()->getGamePlayer(i)->getHealth()+1);
        }
    } else if (World::getInstance()->getRoundFinished() == false) {
        ui->lblGameDeclaration->setText(""); // do not display 'Round Over' declaration
        ui->lblPlayDeclaration->setText(""); // do not display pressPlay instructions
    }
}


//Resets all of the world items... and by that i mean, calls the gamemodel class to reset all of the world items! and redisplay the
// home screen.
void InGame::on_btnHome_clicked() {
    this->deleteLater();
    World::getInstance()->ResetWorld();
    Timer::getInstance()->getTimer()->stop();
    ui->btnPause->setText("Play");
    home->show();
}
















