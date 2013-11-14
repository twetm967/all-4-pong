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
    x = 255;
    y = 255;
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

}

clientingame::~clientingame()
{
    delete ui;
}
void clientingame::mouseMoveEvent(QMouseEvent *ev) {

   x = ui->gameCourt->mapFromParent(ev->pos()).x();

    y = ui->gameCourt->mapFromParent(ev->pos()).y();
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
        int health;
        if (v->at(1) == "0"){
            xx = v->at(3).toInt();
            yy = v->at(4).toInt();
            health = v->at(6).toInt();
            ui->paddle_0->move(xx,yy);
            ui->lblUsernamePB->setText(v->at(2));
            ui->lblScorePB->setText(v->at(5));
            HealthDamage(0,health);

        }else if(v->at(1) == "1"){
            xx = v->at(3).toInt();
            yy = v->at(4).toInt();
            health = v->at(6).toInt();
            ui->paddle_1->move(xx,yy);
            ui->lblUsernamePR->setText(v->at(2));
            ui->lblScorePR->setText(v->at(5));
            HealthDamage(1,health);

        }else if(v->at(1) == "2"){
            xx = v->at(3).toInt();
            yy = v->at(4).toInt();
            health = v->at(6).toInt();
            ui->paddle_2->move(xx,yy);
            ui->lblUsernamePT->setText(v->at(2));
            ui->lblScorePT->setText(v->at(5));
            HealthDamage(2,health);

        }else if(v->at(1) == "3"){
            xx = v->at(3).toInt();
            yy = v->at(4).toInt();
            health = v->at(6).toInt();
            ui->paddle_3->move(xx,yy);
            ui->lblUsernamePL->setText(v->at(2));
            ui->lblScorePL->setText(v->at(5));
            HealthDamage(3,health);
        }

    }else if(v->at(0) == "2"){
        //update the object
    }
}

void clientingame::HealthDamage(int index, int health){
    int spot = 7 * index;
    //--health;
    if(health > -1 && health < 7){
        QLabel* lbl = Health.at(spot + health);
        lbl->setStyleSheet("background-color: rgb(0, 0, 0); border-radius: 10px;");
    }
    else if (health < 0) {
        //qDebug() << "No more death possible";
    }
}
