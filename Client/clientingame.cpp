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
        int ballX = v->at(2).toInt()-5;
        int ballY = v->at(3).toInt()-5;
        ui->lblBall_2->move(ballX, ballY);

    }else if(v->at(0) == "1"){
        //1/0/username/x/y/points/health/
        int xx;
        int yy;
        if (v->at(1) == "0"){
            xx = v->at(3).toInt();
            yy = v->at(4).toInt();
            ui->paddle_0->move(xx,yy);
            ui->lblUsernamePB->setText(v->at(2));

        }else if(v->at(1) == "1"){
            xx = v->at(3).toInt();
            yy = v->at(4).toInt();
            ui->paddle_1->move(xx,yy);
            ui->lblUsernamePL->setText(v->at(2));

        }else if(v->at(1) == "2"){
            xx = v->at(3).toInt();
            yy = v->at(4).toInt();
            ui->paddle_2->move(xx,yy);
            ui->lblUsernamePT->setText(v->at(2));

        }else if(v->at(1) == "3"){
            xx = v->at(3).toInt();
            yy = v->at(4).toInt();
            ui->paddle_3->move(xx,yy);
            ui->lblUsernamePR->setText(v->at(2));

        }

    }else if(v->at(0) == "2"){
        //update the object
    }
}
