#include "clientingame.h"
#include "ui_clientingame.h"

clientingame::clientingame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clientingame)
{
    ui->setupUi(this);
}

clientingame::~clientingame()
{
    delete ui;
}
