#include "clientingame.h"
#include "ui_clientingame.h"
#include <vector>
#include <QString>

#include <QMouseEvent>

clientingame::clientingame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clientingame)
{
    ui->setupUi(this);
    x = 0;
    y = 0;
}

clientingame::~clientingame()
{
    delete ui;
}
void clientingame::mouseMoveEvent(QMouseEvent *ev) {
    x = ev->x();
    y = ev->y();
    //timer->start();
}

void clientingame::MoveLabels(std::vector<QString> *v){
    if (v->at(0) == "0"){
        // 0/ball1/x/y/
        int ballX = v->at(2).toInt();
        int ballY = v->at(3).toInt();
        ui->lblBall_2->move(ballX, ballY);
    }else if(v->at(0) == "1"){
        //update the player
    }else if(v->at(0) == "2"){
        //update the object
    }
}
