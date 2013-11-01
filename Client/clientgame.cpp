#include "ingame.h"
#include "ui_ingame.h"

ingame::ingame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ingame)
{
    ui->setupUi(this);
}

ingame::~ingame()
{
    delete ui;
}
