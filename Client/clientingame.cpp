#include "clientingame.h"
#include "ui_clientingame.h"

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
