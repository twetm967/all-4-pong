#include "ingame.h"
#include "ui_ingame.h"

InGame::InGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InGame)
{
    ui->setupUi(this);
}

InGame::~InGame()
{
    delete ui;
}
