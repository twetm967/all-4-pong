/********************************************************************************
** Form generated from reading UI file 'ingame.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGAME_H
#define UI_INGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "GameLabel.h"

QT_BEGIN_NAMESPACE

class Ui_InGame
{
public:
    QLabel *lblTop2Usrnm;
    QLabel *lblLife3PT;
    QLabel *lblLife4PL;
    QLabel *lblLife7PT;
    QLabel *lblLife6PB;
    QLabel *lblUsernamePR;
    QLabel *lblTop3Usrnm;
    QLabel *lblTop1Score;
    QLabel *lblPlayerBoardR;
    QLabel *lblTop3Score;
    QLabel *lblLife2PR;
    QLabel *lblLife5PB;
    QLabel *lblLeaderBoard;
    QLabel *lblPlayerBoardB;
    QLabel *lblScorePB;
    QPushButton *btnPause;
    QLabel *lblUsernamePT;
    QPushButton *btnCheat;
    QLabel *lblLife5PL;
    QLabel *lblLeaderBoardTitle;
    QLabel *lblLife3PR;
    QLabel *lblScorePT;
    QLabel *lblLife7PR;
    QWidget *gameCourt;
    GameLabel *lblBall;
    GameLabel *lblPaddleBottom;
    GameLabel *lblPaddleLeft;
    GameLabel *lblPaddleRight;
    GameLabel *lblPaddleTop;
    QLabel *lblTop2Score;
    QLabel *lblLife6PR;
    QLabel *lblLife4PB;
    QLabel *lblLife6PT;
    QLabel *lblLife3PB;
    QLabel *lblPlayerBoardL;
    QLabel *lblLife1PL;
    QLabel *lblLife5PT;
    QLabel *lblLife1PB;
    QLabel *lblLife1PT;
    QLabel *lblUsernamePL;
    QLabel *lblLife4PT;
    QLabel *lblPlayerBoardT;
    QLabel *lblLife2PT;
    QLabel *lblLife7PL;
    QLabel *lblLife3PL;
    QLabel *lblTop1Usrnm;
    QLabel *lblScorePR;
    QLabel *lblLife5PR;
    QLabel *lblLife7PB;
    QLabel *lblScorePL;
    QLabel *lblUsernamePB;
    QLabel *lblLife1PR;
    QLabel *lblLife6PL;
    QLabel *lblLife2PL;
    QLabel *lblLife2PB;
    QLabel *lblLife4PR;
    QPushButton *btnHome;

    void setupUi(QWidget *InGame)
    {
        if (InGame->objectName().isEmpty())
            InGame->setObjectName(QStringLiteral("InGame"));
        InGame->resize(1125, 633);
        InGame->setMouseTracking(true);
        InGame->setStyleSheet(QStringLiteral("background-color: rgb(61, 61, 61);"));
        lblTop2Usrnm = new QLabel(InGame);
        lblTop2Usrnm->setObjectName(QStringLiteral("lblTop2Usrnm"));
        lblTop2Usrnm->setGeometry(QRect(495, 15, 61, 20));
        lblTop2Usrnm->setMouseTracking(true);
        lblTop2Usrnm->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife3PT = new QLabel(InGame);
        lblLife3PT->setObjectName(QStringLiteral("lblLife3PT"));
        lblLife3PT->setGeometry(QRect(315, 70, 20, 20));
        lblLife3PT->setMouseTracking(true);
        lblLife3PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife4PL = new QLabel(InGame);
        lblLife4PL->setObjectName(QStringLiteral("lblLife4PL"));
        lblLife4PL->setGeometry(QRect(140, 280, 20, 20));
        lblLife4PL->setMouseTracking(true);
        lblLife4PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife7PT = new QLabel(InGame);
        lblLife7PT->setObjectName(QStringLiteral("lblLife7PT"));
        lblLife7PT->setGeometry(QRect(415, 70, 20, 20));
        lblLife7PT->setMouseTracking(true);
        lblLife7PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife6PB = new QLabel(InGame);
        lblLife6PB->setObjectName(QStringLiteral("lblLife6PB"));
        lblLife6PB->setGeometry(QRect(390, 580, 20, 20));
        lblLife6PB->setMouseTracking(true);
        lblLife6PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblUsernamePR = new QLabel(InGame);
        lblUsernamePR->setObjectName(QStringLiteral("lblUsernamePR"));
        lblUsernamePR->setGeometry(QRect(735, 335, 131, 20));
        lblUsernamePR->setMouseTracking(true);
        lblUsernamePR->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblTop3Usrnm = new QLabel(InGame);
        lblTop3Usrnm->setObjectName(QStringLiteral("lblTop3Usrnm"));
        lblTop3Usrnm->setGeometry(QRect(655, 15, 61, 20));
        lblTop3Usrnm->setMouseTracking(true);
        lblTop3Usrnm->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblTop1Score = new QLabel(InGame);
        lblTop1Score->setObjectName(QStringLiteral("lblTop1Score"));
        lblTop1Score->setGeometry(QRect(395, 15, 61, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lblTop1Score->setFont(font);
        lblTop1Score->setMouseTracking(true);
        lblTop1Score->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblTop1Score->setFrameShadow(QFrame::Plain);
        lblPlayerBoardR = new QLabel(InGame);
        lblPlayerBoardR->setObjectName(QStringLiteral("lblPlayerBoardR"));
        lblPlayerBoardR->setGeometry(QRect(710, 270, 200, 100));
        lblPlayerBoardR->setMouseTracking(true);
        lblPlayerBoardR->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblTop3Score = new QLabel(InGame);
        lblTop3Score->setObjectName(QStringLiteral("lblTop3Score"));
        lblTop3Score->setGeometry(QRect(725, 15, 61, 17));
        lblTop3Score->setFont(font);
        lblTop3Score->setMouseTracking(true);
        lblTop3Score->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblTop3Score->setFrameShadow(QFrame::Plain);
        lblLife2PR = new QLabel(InGame);
        lblLife2PR->setObjectName(QStringLiteral("lblLife2PR"));
        lblLife2PR->setGeometry(QRect(750, 280, 20, 20));
        lblLife2PR->setMouseTracking(true);
        lblLife2PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife5PB = new QLabel(InGame);
        lblLife5PB->setObjectName(QStringLiteral("lblLife5PB"));
        lblLife5PB->setGeometry(QRect(365, 580, 20, 20));
        lblLife5PB->setMouseTracking(true);
        lblLife5PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLeaderBoard = new QLabel(InGame);
        lblLeaderBoard->setObjectName(QStringLiteral("lblLeaderBoard"));
        lblLeaderBoard->setGeometry(QRect(145, 0, 801, 50));
        lblLeaderBoard->setMouseTracking(true);
        lblLeaderBoard->setStyleSheet(QLatin1String("background-color: rgb(104, 104, 104);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblPlayerBoardB = new QLabel(InGame);
        lblPlayerBoardB->setObjectName(QStringLiteral("lblPlayerBoardB"));
        lblPlayerBoardB->setGeometry(QRect(255, 565, 451, 50));
        lblPlayerBoardB->setMouseTracking(true);
        lblPlayerBoardB->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblScorePB = new QLabel(InGame);
        lblScorePB->setObjectName(QStringLiteral("lblScorePB"));
        lblScorePB->setGeometry(QRect(465, 580, 61, 17));
        lblScorePB->setFont(font);
        lblScorePB->setMouseTracking(true);
        lblScorePB->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblScorePB->setFrameShadow(QFrame::Plain);
        btnPause = new QPushButton(InGame);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        btnPause->setGeometry(QRect(810, 560, 61, 61));
        btnPause->setMouseTracking(true);
        btnPause->setFocusPolicy(Qt::NoFocus);
        btnPause->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 30px;"));
        lblUsernamePT = new QLabel(InGame);
        lblUsernamePT->setObjectName(QStringLiteral("lblUsernamePT"));
        lblUsernamePT->setGeometry(QRect(555, 70, 131, 20));
        lblUsernamePT->setMouseTracking(true);
        lblUsernamePT->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        btnCheat = new QPushButton(InGame);
        btnCheat->setObjectName(QStringLiteral("btnCheat"));
        btnCheat->setGeometry(QRect(880, 560, 61, 61));
        btnCheat->setMouseTracking(true);
        btnCheat->setFocusPolicy(Qt::NoFocus);
        btnCheat->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 30px;"));
        lblLife5PL = new QLabel(InGame);
        lblLife5PL->setObjectName(QStringLiteral("lblLife5PL"));
        lblLife5PL->setGeometry(QRect(165, 280, 20, 20));
        lblLife5PL->setMouseTracking(true);
        lblLife5PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLeaderBoardTitle = new QLabel(InGame);
        lblLeaderBoardTitle->setObjectName(QStringLiteral("lblLeaderBoardTitle"));
        lblLeaderBoardTitle->setGeometry(QRect(185, 15, 81, 20));
        lblLeaderBoardTitle->setMouseTracking(true);
        lblLeaderBoardTitle->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife3PR = new QLabel(InGame);
        lblLife3PR->setObjectName(QStringLiteral("lblLife3PR"));
        lblLife3PR->setGeometry(QRect(775, 280, 20, 20));
        lblLife3PR->setMouseTracking(true);
        lblLife3PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblScorePT = new QLabel(InGame);
        lblScorePT->setObjectName(QStringLiteral("lblScorePT"));
        lblScorePT->setGeometry(QRect(465, 70, 61, 17));
        lblScorePT->setFont(font);
        lblScorePT->setMouseTracking(true);
        lblScorePT->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblScorePT->setFrameShadow(QFrame::Plain);
        lblLife7PR = new QLabel(InGame);
        lblLife7PR->setObjectName(QStringLiteral("lblLife7PR"));
        lblLife7PR->setGeometry(QRect(875, 280, 20, 20));
        lblLife7PR->setMouseTracking(true);
        lblLife7PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        gameCourt = new QWidget(InGame);
        gameCourt->setObjectName(QStringLiteral("gameCourt"));
        gameCourt->setEnabled(true);
        gameCourt->setGeometry(QRect(260, 110, 450, 450));
        gameCourt->setMouseTracking(true);
        gameCourt->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border: 2px solid rgb(137, 255, 200);\n"
"box-shadow: 10px 10px 30px rgb(0, 0, 0);"));
        lblBall = new GameLabel(gameCourt);
        lblBall->setObjectName(QStringLiteral("lblBall"));
        lblBall->setGeometry(QRect(220, 210, 30, 30));
        lblBall->setMouseTracking(true);
        lblBall->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 15px;"));
        lblPaddleBottom = new GameLabel(gameCourt);
        lblPaddleBottom->setObjectName(QStringLiteral("lblPaddleBottom"));
        lblPaddleBottom->setGeometry(QRect(170, 420, 101, 17));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPaddleBottom->sizePolicy().hasHeightForWidth());
        lblPaddleBottom->setSizePolicy(sizePolicy);
        lblPaddleBottom->setBaseSize(QSize(0, 0));
        lblPaddleBottom->setMouseTracking(true);
        lblPaddleBottom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;"));
        lblPaddleBottom->setFrameShadow(QFrame::Raised);
        lblPaddleLeft = new GameLabel(gameCourt);
        lblPaddleLeft->setObjectName(QStringLiteral("lblPaddleLeft"));
        lblPaddleLeft->setGeometry(QRect(10, 120, 17, 101));
        sizePolicy.setHeightForWidth(lblPaddleLeft->sizePolicy().hasHeightForWidth());
        lblPaddleLeft->setSizePolicy(sizePolicy);
        lblPaddleLeft->setBaseSize(QSize(0, 0));
        lblPaddleLeft->setMouseTracking(true);
        lblPaddleLeft->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;"));
        lblPaddleLeft->setFrameShadow(QFrame::Raised);
        lblPaddleRight = new GameLabel(gameCourt);
        lblPaddleRight->setObjectName(QStringLiteral("lblPaddleRight"));
        lblPaddleRight->setGeometry(QRect(420, 120, 17, 101));
        sizePolicy.setHeightForWidth(lblPaddleRight->sizePolicy().hasHeightForWidth());
        lblPaddleRight->setSizePolicy(sizePolicy);
        lblPaddleRight->setBaseSize(QSize(0, 0));
        lblPaddleRight->setMouseTracking(true);
        lblPaddleRight->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;"));
        lblPaddleRight->setFrameShadow(QFrame::Raised);
        lblPaddleTop = new GameLabel(gameCourt);
        lblPaddleTop->setObjectName(QStringLiteral("lblPaddleTop"));
        lblPaddleTop->setGeometry(QRect(140, 10, 101, 17));
        sizePolicy.setHeightForWidth(lblPaddleTop->sizePolicy().hasHeightForWidth());
        lblPaddleTop->setSizePolicy(sizePolicy);
        lblPaddleTop->setBaseSize(QSize(0, 0));
        lblPaddleTop->setMouseTracking(true);
        lblPaddleTop->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;"));
        lblPaddleTop->setFrameShadow(QFrame::Raised);
        lblTop2Score = new QLabel(InGame);
        lblTop2Score->setObjectName(QStringLiteral("lblTop2Score"));
        lblTop2Score->setGeometry(QRect(565, 15, 61, 17));
        lblTop2Score->setFont(font);
        lblTop2Score->setMouseTracking(true);
        lblTop2Score->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblTop2Score->setFrameShadow(QFrame::Plain);
        lblLife6PR = new QLabel(InGame);
        lblLife6PR->setObjectName(QStringLiteral("lblLife6PR"));
        lblLife6PR->setGeometry(QRect(850, 280, 20, 20));
        lblLife6PR->setMouseTracking(true);
        lblLife6PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife4PB = new QLabel(InGame);
        lblLife4PB->setObjectName(QStringLiteral("lblLife4PB"));
        lblLife4PB->setGeometry(QRect(340, 580, 20, 20));
        lblLife4PB->setMouseTracking(true);
        lblLife4PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife6PT = new QLabel(InGame);
        lblLife6PT->setObjectName(QStringLiteral("lblLife6PT"));
        lblLife6PT->setGeometry(QRect(390, 70, 20, 20));
        lblLife6PT->setMouseTracking(true);
        lblLife6PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife3PB = new QLabel(InGame);
        lblLife3PB->setObjectName(QStringLiteral("lblLife3PB"));
        lblLife3PB->setGeometry(QRect(315, 580, 20, 20));
        lblLife3PB->setMouseTracking(true);
        lblLife3PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblPlayerBoardL = new QLabel(InGame);
        lblPlayerBoardL->setObjectName(QStringLiteral("lblPlayerBoardL"));
        lblPlayerBoardL->setGeometry(QRect(50, 270, 200, 100));
        lblPlayerBoardL->setMouseTracking(true);
        lblPlayerBoardL->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblLife1PL = new QLabel(InGame);
        lblLife1PL->setObjectName(QStringLiteral("lblLife1PL"));
        lblLife1PL->setGeometry(QRect(65, 280, 20, 20));
        lblLife1PL->setMouseTracking(true);
        lblLife1PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife5PT = new QLabel(InGame);
        lblLife5PT->setObjectName(QStringLiteral("lblLife5PT"));
        lblLife5PT->setGeometry(QRect(365, 70, 20, 20));
        lblLife5PT->setMouseTracking(true);
        lblLife5PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife1PB = new QLabel(InGame);
        lblLife1PB->setObjectName(QStringLiteral("lblLife1PB"));
        lblLife1PB->setGeometry(QRect(265, 580, 20, 20));
        lblLife1PB->setMouseTracking(true);
        lblLife1PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife1PT = new QLabel(InGame);
        lblLife1PT->setObjectName(QStringLiteral("lblLife1PT"));
        lblLife1PT->setGeometry(QRect(265, 70, 20, 20));
        lblLife1PT->setMouseTracking(true);
        lblLife1PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblUsernamePL = new QLabel(InGame);
        lblUsernamePL->setObjectName(QStringLiteral("lblUsernamePL"));
        lblUsernamePL->setGeometry(QRect(75, 335, 131, 20));
        lblUsernamePL->setMouseTracking(true);
        lblUsernamePL->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife4PT = new QLabel(InGame);
        lblLife4PT->setObjectName(QStringLiteral("lblLife4PT"));
        lblLife4PT->setGeometry(QRect(340, 70, 20, 20));
        lblLife4PT->setMouseTracking(true);
        lblLife4PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblPlayerBoardT = new QLabel(InGame);
        lblPlayerBoardT->setObjectName(QStringLiteral("lblPlayerBoardT"));
        lblPlayerBoardT->setGeometry(QRect(255, 55, 451, 50));
        lblPlayerBoardT->setMouseTracking(true);
        lblPlayerBoardT->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblLife2PT = new QLabel(InGame);
        lblLife2PT->setObjectName(QStringLiteral("lblLife2PT"));
        lblLife2PT->setGeometry(QRect(290, 70, 20, 20));
        lblLife2PT->setMouseTracking(true);
        lblLife2PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife7PL = new QLabel(InGame);
        lblLife7PL->setObjectName(QStringLiteral("lblLife7PL"));
        lblLife7PL->setGeometry(QRect(215, 280, 20, 20));
        lblLife7PL->setMouseTracking(true);
        lblLife7PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife3PL = new QLabel(InGame);
        lblLife3PL->setObjectName(QStringLiteral("lblLife3PL"));
        lblLife3PL->setGeometry(QRect(115, 280, 20, 20));
        lblLife3PL->setMouseTracking(true);
        lblLife3PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblTop1Usrnm = new QLabel(InGame);
        lblTop1Usrnm->setObjectName(QStringLiteral("lblTop1Usrnm"));
        lblTop1Usrnm->setGeometry(QRect(325, 15, 61, 20));
        lblTop1Usrnm->setMouseTracking(true);
        lblTop1Usrnm->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblScorePR = new QLabel(InGame);
        lblScorePR->setObjectName(QStringLiteral("lblScorePR"));
        lblScorePR->setGeometry(QRect(735, 310, 61, 17));
        lblScorePR->setFont(font);
        lblScorePR->setMouseTracking(true);
        lblScorePR->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblScorePR->setFrameShadow(QFrame::Plain);
        lblLife5PR = new QLabel(InGame);
        lblLife5PR->setObjectName(QStringLiteral("lblLife5PR"));
        lblLife5PR->setGeometry(QRect(825, 280, 20, 20));
        lblLife5PR->setMouseTracking(true);
        lblLife5PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife7PB = new QLabel(InGame);
        lblLife7PB->setObjectName(QStringLiteral("lblLife7PB"));
        lblLife7PB->setGeometry(QRect(415, 580, 20, 20));
        lblLife7PB->setMouseTracking(true);
        lblLife7PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblScorePL = new QLabel(InGame);
        lblScorePL->setObjectName(QStringLiteral("lblScorePL"));
        lblScorePL->setGeometry(QRect(75, 310, 61, 16));
        lblScorePL->setFont(font);
        lblScorePL->setMouseTracking(true);
        lblScorePL->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblScorePL->setFrameShadow(QFrame::Plain);
        lblUsernamePB = new QLabel(InGame);
        lblUsernamePB->setObjectName(QStringLiteral("lblUsernamePB"));
        lblUsernamePB->setGeometry(QRect(555, 580, 131, 20));
        lblUsernamePB->setMouseTracking(true);
        lblUsernamePB->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife1PR = new QLabel(InGame);
        lblLife1PR->setObjectName(QStringLiteral("lblLife1PR"));
        lblLife1PR->setGeometry(QRect(725, 280, 20, 20));
        lblLife1PR->setMouseTracking(true);
        lblLife1PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife6PL = new QLabel(InGame);
        lblLife6PL->setObjectName(QStringLiteral("lblLife6PL"));
        lblLife6PL->setGeometry(QRect(190, 280, 20, 20));
        lblLife6PL->setMouseTracking(true);
        lblLife6PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife2PL = new QLabel(InGame);
        lblLife2PL->setObjectName(QStringLiteral("lblLife2PL"));
        lblLife2PL->setGeometry(QRect(90, 280, 20, 20));
        lblLife2PL->setMouseTracking(true);
        lblLife2PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife2PB = new QLabel(InGame);
        lblLife2PB->setObjectName(QStringLiteral("lblLife2PB"));
        lblLife2PB->setGeometry(QRect(290, 580, 20, 20));
        lblLife2PB->setMouseTracking(true);
        lblLife2PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife4PR = new QLabel(InGame);
        lblLife4PR->setObjectName(QStringLiteral("lblLife4PR"));
        lblLife4PR->setGeometry(QRect(800, 280, 20, 20));
        lblLife4PR->setMouseTracking(true);
        lblLife4PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        btnHome = new QPushButton(InGame);
        btnHome->setObjectName(QStringLiteral("btnHome"));
        btnHome->setGeometry(QRect(950, 560, 61, 61));
        btnHome->setMouseTracking(true);
        btnHome->setFocusPolicy(Qt::NoFocus);
        btnHome->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 30px;"));
        gameCourt->raise();
        lblPlayerBoardB->raise();
        lblLeaderBoard->raise();
        lblPlayerBoardL->raise();
        lblPlayerBoardR->raise();
        lblPlayerBoardT->raise();
        lblTop2Usrnm->raise();
        lblLife3PT->raise();
        lblLife4PL->raise();
        lblLife7PT->raise();
        lblLife6PB->raise();
        lblUsernamePR->raise();
        lblTop3Usrnm->raise();
        lblTop1Score->raise();
        lblTop3Score->raise();
        lblLife2PR->raise();
        lblLife5PB->raise();
        lblScorePB->raise();
        btnPause->raise();
        lblUsernamePT->raise();
        btnCheat->raise();
        lblLife5PL->raise();
        lblLeaderBoardTitle->raise();
        lblLife3PR->raise();
        lblScorePT->raise();
        lblLife7PR->raise();
        lblTop2Score->raise();
        lblLife6PR->raise();
        lblLife4PB->raise();
        lblLife6PT->raise();
        lblLife3PB->raise();
        lblLife1PL->raise();
        lblLife5PT->raise();
        lblLife1PB->raise();
        lblLife1PT->raise();
        lblUsernamePL->raise();
        lblLife4PT->raise();
        lblLife7PL->raise();
        lblLife3PL->raise();
        lblTop1Usrnm->raise();
        lblScorePR->raise();
        lblLife5PR->raise();
        lblLife7PB->raise();
        lblScorePL->raise();
        lblUsernamePB->raise();
        lblLife1PR->raise();
        lblLife6PL->raise();
        lblLife2PL->raise();
        lblLife2PB->raise();
        lblLife4PR->raise();
        lblLife2PT->raise();
        btnHome->raise();

        retranslateUi(InGame);

        QMetaObject::connectSlotsByName(InGame);
    } // setupUi

    void retranslateUi(QWidget *InGame)
    {
        InGame->setWindowTitle(QApplication::translate("InGame", "All-4-Pong - Game Court", 0));
        lblTop2Usrnm->setText(QApplication::translate("InGame", "Sara", 0));
        lblLife3PT->setText(QString());
        lblLife4PL->setText(QString());
        lblLife7PT->setText(QString());
        lblLife6PB->setText(QString());
        lblUsernamePR->setText(QApplication::translate("InGame", "Simply Smashing", 0));
        lblTop3Usrnm->setText(QApplication::translate("InGame", "Luke", 0));
        lblTop1Score->setText(QApplication::translate("InGame", "4000", 0));
        lblPlayerBoardR->setText(QString());
        lblTop3Score->setText(QApplication::translate("InGame", "3150", 0));
        lblLife2PR->setText(QString());
        lblLife5PB->setText(QString());
        lblLeaderBoard->setText(QString());
        lblPlayerBoardB->setText(QString());
        lblScorePB->setText(QApplication::translate("InGame", "2050", 0));
        btnPause->setText(QApplication::translate("InGame", "Play", 0));
        lblUsernamePT->setText(QApplication::translate("InGame", "Crusher", 0));
        btnCheat->setText(QApplication::translate("InGame", "Cheat", 0));
        lblLife5PL->setText(QString());
        lblLeaderBoardTitle->setText(QApplication::translate("InGame", "Top Scores", 0));
        lblLife3PR->setText(QString());
        lblScorePT->setText(QApplication::translate("InGame", "1550", 0));
        lblLife7PR->setText(QString());
        lblBall->setText(QString());
        lblPaddleBottom->setText(QString());
        lblPaddleLeft->setText(QString());
        lblPaddleRight->setText(QString());
        lblPaddleTop->setText(QString());
        lblTop2Score->setText(QApplication::translate("InGame", "3550", 0));
        lblLife6PR->setText(QString());
        lblLife4PB->setText(QString());
        lblLife6PT->setText(QString());
        lblLife3PB->setText(QString());
        lblPlayerBoardL->setText(QString());
        lblLife1PL->setText(QString());
        lblLife5PT->setText(QString());
        lblLife1PB->setText(QString());
        lblLife1PT->setText(QString());
        lblUsernamePL->setText(QApplication::translate("InGame", "Dr. Steven Jones", 0));
        lblLife4PT->setText(QString());
        lblPlayerBoardT->setText(QString());
        lblLife2PT->setText(QString());
        lblLife7PL->setText(QString());
        lblLife3PL->setText(QString());
        lblTop1Usrnm->setText(QApplication::translate("InGame", "Fred", 0));
        lblScorePR->setText(QApplication::translate("InGame", "900", 0));
        lblLife5PR->setText(QString());
        lblLife7PB->setText(QString());
        lblScorePL->setText(QApplication::translate("InGame", "3750", 0));
        lblUsernamePB->setText(QApplication::translate("InGame", "The Slammer", 0));
        lblLife1PR->setText(QString());
        lblLife6PL->setText(QString());
        lblLife2PL->setText(QString());
        lblLife2PB->setText(QString());
        lblLife4PR->setText(QString());
        btnHome->setText(QApplication::translate("InGame", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class InGame: public Ui_InGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGAME_H
