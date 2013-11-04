#include "clientgame.h"
#include "ui_ingame.h"

clientgame::clientgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clientgame)
{
    ui->setupUi(this);
}

clientgame::~clientgame()
{
    delete ui;
}
