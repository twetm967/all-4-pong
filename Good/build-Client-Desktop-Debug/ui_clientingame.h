/********************************************************************************
** Form generated from reading UI file 'clientingame.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTINGAME_H
#define UI_CLIENTINGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientingame
{
public:
    QLabel *lblPlayerBoardR;
    QLabel *lblUsernamePT;
    QLabel *lblLife4PT;
    QLabel *lblScorePT;
    QLabel *lblScorePR;
    QLabel *lblLife6PT;
    QLabel *lblLife2PL;
    QLabel *lblLife7PT;
    QLabel *lblLife3PT;
    QLabel *lblLife1PR;
    QLabel *lblLife7PR;
    QLabel *lblLife2PB;
    QLabel *lblLife4PR;
    QLabel *lblLife2PT;
    QLabel *lblTop3Score;
    QLabel *lblUsernamePB;
    QLabel *lblLife5PT;
    QLabel *lblLife3PL;
    QLabel *lblTop1Usrnm;
    QLabel *lblLife3PR;
    QLabel *lblLife4PB;
    QLabel *lblScorePB;
    QLabel *lblLeaderBoard;
    QLabel *lblLife6PR;
    QLabel *lblUsernamePR;
    QLabel *lblLife5PB;
    QLabel *lblLife7PB;
    QLabel *lblLife7PL;
    QLabel *lblTop1Score;
    QLabel *lblLife2PR;
    QLabel *lblPlayerBoardB;
    QLabel *lblLife1PB;
    QLabel *lblLife1PL;
    QLabel *lblScorePL;
    QLabel *lblLife1PT;
    QLabel *lblUsernamePL;
    QLabel *lblLife5PL;
    QLabel *lblLife4PL;
    QLabel *lblLife6PB;
    QLabel *lblLife6PL;
    QLabel *lblPlayerBoardL;
    QLabel *lblLife3PB;
    QLabel *lblTop2Score;
    QWidget *gameCourt;
    QLabel *lblBall_2;
    QLabel *paddle_0;
    QLabel *paddle_1;
    QLabel *paddle_3;
    QLabel *paddle_2;
    QLabel *lblLeaderBoardTitle;
    QLabel *lblLife5PR;
    QLabel *lblTop2Usrnm;
    QLabel *lblTop3Usrnm;
    QLabel *lblPlayerBoardT;

    void setupUi(QWidget *clientingame)
    {
        if (clientingame->objectName().isEmpty())
            clientingame->setObjectName(QStringLiteral("clientingame"));
        clientingame->resize(1125, 633);
        clientingame->setStyleSheet(QStringLiteral("background-color: rgb(61, 61, 61);"));
        lblPlayerBoardR = new QLabel(clientingame);
        lblPlayerBoardR->setObjectName(QStringLiteral("lblPlayerBoardR"));
        lblPlayerBoardR->setGeometry(QRect(730, 280, 200, 100));
        lblPlayerBoardR->setMouseTracking(true);
        lblPlayerBoardR->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblUsernamePT = new QLabel(clientingame);
        lblUsernamePT->setObjectName(QStringLiteral("lblUsernamePT"));
        lblUsernamePT->setGeometry(QRect(560, 70, 131, 20));
        lblUsernamePT->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife4PT = new QLabel(clientingame);
        lblLife4PT->setObjectName(QStringLiteral("lblLife4PT"));
        lblLife4PT->setGeometry(QRect(345, 70, 20, 20));
        lblLife4PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblScorePT = new QLabel(clientingame);
        lblScorePT->setObjectName(QStringLiteral("lblScorePT"));
        lblScorePT->setGeometry(QRect(470, 70, 61, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lblScorePT->setFont(font);
        lblScorePT->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblScorePT->setFrameShadow(QFrame::Plain);
        lblScorePR = new QLabel(clientingame);
        lblScorePR->setObjectName(QStringLiteral("lblScorePR"));
        lblScorePR->setGeometry(QRect(755, 320, 61, 17));
        lblScorePR->setFont(font);
        lblScorePR->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblScorePR->setFrameShadow(QFrame::Plain);
        lblLife6PT = new QLabel(clientingame);
        lblLife6PT->setObjectName(QStringLiteral("lblLife6PT"));
        lblLife6PT->setGeometry(QRect(395, 70, 20, 20));
        lblLife6PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife2PL = new QLabel(clientingame);
        lblLife2PL->setObjectName(QStringLiteral("lblLife2PL"));
        lblLife2PL->setGeometry(QRect(90, 280, 20, 20));
        lblLife2PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife7PT = new QLabel(clientingame);
        lblLife7PT->setObjectName(QStringLiteral("lblLife7PT"));
        lblLife7PT->setGeometry(QRect(420, 70, 20, 20));
        lblLife7PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife3PT = new QLabel(clientingame);
        lblLife3PT->setObjectName(QStringLiteral("lblLife3PT"));
        lblLife3PT->setGeometry(QRect(320, 70, 20, 20));
        lblLife3PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife1PR = new QLabel(clientingame);
        lblLife1PR->setObjectName(QStringLiteral("lblLife1PR"));
        lblLife1PR->setGeometry(QRect(745, 290, 20, 20));
        lblLife1PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife7PR = new QLabel(clientingame);
        lblLife7PR->setObjectName(QStringLiteral("lblLife7PR"));
        lblLife7PR->setGeometry(QRect(895, 290, 20, 20));
        lblLife7PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife2PB = new QLabel(clientingame);
        lblLife2PB->setObjectName(QStringLiteral("lblLife2PB"));
        lblLife2PB->setGeometry(QRect(295, 590, 20, 20));
        lblLife2PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife4PR = new QLabel(clientingame);
        lblLife4PR->setObjectName(QStringLiteral("lblLife4PR"));
        lblLife4PR->setGeometry(QRect(820, 290, 20, 20));
        lblLife4PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife2PT = new QLabel(clientingame);
        lblLife2PT->setObjectName(QStringLiteral("lblLife2PT"));
        lblLife2PT->setGeometry(QRect(295, 70, 20, 20));
        lblLife2PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblTop3Score = new QLabel(clientingame);
        lblTop3Score->setObjectName(QStringLiteral("lblTop3Score"));
        lblTop3Score->setGeometry(QRect(735, 15, 61, 17));
        lblTop3Score->setFont(font);
        lblTop3Score->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblTop3Score->setFrameShadow(QFrame::Plain);
        lblUsernamePB = new QLabel(clientingame);
        lblUsernamePB->setObjectName(QStringLiteral("lblUsernamePB"));
        lblUsernamePB->setGeometry(QRect(560, 590, 131, 20));
        lblUsernamePB->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife5PT = new QLabel(clientingame);
        lblLife5PT->setObjectName(QStringLiteral("lblLife5PT"));
        lblLife5PT->setGeometry(QRect(370, 70, 20, 20));
        lblLife5PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife3PL = new QLabel(clientingame);
        lblLife3PL->setObjectName(QStringLiteral("lblLife3PL"));
        lblLife3PL->setGeometry(QRect(115, 280, 20, 20));
        lblLife3PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblTop1Usrnm = new QLabel(clientingame);
        lblTop1Usrnm->setObjectName(QStringLiteral("lblTop1Usrnm"));
        lblTop1Usrnm->setGeometry(QRect(325, 15, 61, 20));
        lblTop1Usrnm->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife3PR = new QLabel(clientingame);
        lblLife3PR->setObjectName(QStringLiteral("lblLife3PR"));
        lblLife3PR->setGeometry(QRect(795, 290, 20, 20));
        lblLife3PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife4PB = new QLabel(clientingame);
        lblLife4PB->setObjectName(QStringLiteral("lblLife4PB"));
        lblLife4PB->setGeometry(QRect(345, 590, 20, 20));
        lblLife4PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblScorePB = new QLabel(clientingame);
        lblScorePB->setObjectName(QStringLiteral("lblScorePB"));
        lblScorePB->setGeometry(QRect(470, 590, 61, 17));
        lblScorePB->setFont(font);
        lblScorePB->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblScorePB->setFrameShadow(QFrame::Plain);
        lblLeaderBoard = new QLabel(clientingame);
        lblLeaderBoard->setObjectName(QStringLiteral("lblLeaderBoard"));
        lblLeaderBoard->setGeometry(QRect(145, 0, 801, 50));
        lblLeaderBoard->setMouseTracking(true);
        lblLeaderBoard->setStyleSheet(QLatin1String("background-color: rgb(104, 104, 104);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblLife6PR = new QLabel(clientingame);
        lblLife6PR->setObjectName(QStringLiteral("lblLife6PR"));
        lblLife6PR->setGeometry(QRect(870, 290, 20, 20));
        lblLife6PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblUsernamePR = new QLabel(clientingame);
        lblUsernamePR->setObjectName(QStringLiteral("lblUsernamePR"));
        lblUsernamePR->setGeometry(QRect(755, 345, 131, 20));
        lblUsernamePR->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife5PB = new QLabel(clientingame);
        lblLife5PB->setObjectName(QStringLiteral("lblLife5PB"));
        lblLife5PB->setGeometry(QRect(370, 590, 20, 20));
        lblLife5PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife7PB = new QLabel(clientingame);
        lblLife7PB->setObjectName(QStringLiteral("lblLife7PB"));
        lblLife7PB->setGeometry(QRect(420, 590, 20, 20));
        lblLife7PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife7PL = new QLabel(clientingame);
        lblLife7PL->setObjectName(QStringLiteral("lblLife7PL"));
        lblLife7PL->setGeometry(QRect(215, 280, 20, 20));
        lblLife7PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblTop1Score = new QLabel(clientingame);
        lblTop1Score->setObjectName(QStringLiteral("lblTop1Score"));
        lblTop1Score->setGeometry(QRect(395, 15, 61, 17));
        lblTop1Score->setFont(font);
        lblTop1Score->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblTop1Score->setFrameShadow(QFrame::Plain);
        lblLife2PR = new QLabel(clientingame);
        lblLife2PR->setObjectName(QStringLiteral("lblLife2PR"));
        lblLife2PR->setGeometry(QRect(770, 290, 20, 20));
        lblLife2PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblPlayerBoardB = new QLabel(clientingame);
        lblPlayerBoardB->setObjectName(QStringLiteral("lblPlayerBoardB"));
        lblPlayerBoardB->setGeometry(QRect(260, 575, 451, 50));
        lblPlayerBoardB->setMouseTracking(true);
        lblPlayerBoardB->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblLife1PB = new QLabel(clientingame);
        lblLife1PB->setObjectName(QStringLiteral("lblLife1PB"));
        lblLife1PB->setGeometry(QRect(270, 590, 20, 20));
        lblLife1PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife1PL = new QLabel(clientingame);
        lblLife1PL->setObjectName(QStringLiteral("lblLife1PL"));
        lblLife1PL->setGeometry(QRect(65, 280, 20, 20));
        lblLife1PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblScorePL = new QLabel(clientingame);
        lblScorePL->setObjectName(QStringLiteral("lblScorePL"));
        lblScorePL->setGeometry(QRect(75, 310, 61, 16));
        lblScorePL->setFont(font);
        lblScorePL->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblScorePL->setFrameShadow(QFrame::Plain);
        lblLife1PT = new QLabel(clientingame);
        lblLife1PT->setObjectName(QStringLiteral("lblLife1PT"));
        lblLife1PT->setGeometry(QRect(270, 70, 20, 20));
        lblLife1PT->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblUsernamePL = new QLabel(clientingame);
        lblUsernamePL->setObjectName(QStringLiteral("lblUsernamePL"));
        lblUsernamePL->setGeometry(QRect(75, 335, 131, 20));
        lblUsernamePL->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife5PL = new QLabel(clientingame);
        lblLife5PL->setObjectName(QStringLiteral("lblLife5PL"));
        lblLife5PL->setGeometry(QRect(165, 280, 20, 20));
        lblLife5PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife4PL = new QLabel(clientingame);
        lblLife4PL->setObjectName(QStringLiteral("lblLife4PL"));
        lblLife4PL->setGeometry(QRect(140, 280, 20, 20));
        lblLife4PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife6PB = new QLabel(clientingame);
        lblLife6PB->setObjectName(QStringLiteral("lblLife6PB"));
        lblLife6PB->setGeometry(QRect(395, 590, 20, 20));
        lblLife6PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblLife6PL = new QLabel(clientingame);
        lblLife6PL->setObjectName(QStringLiteral("lblLife6PL"));
        lblLife6PL->setGeometry(QRect(190, 280, 20, 20));
        lblLife6PL->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblPlayerBoardL = new QLabel(clientingame);
        lblPlayerBoardL->setObjectName(QStringLiteral("lblPlayerBoardL"));
        lblPlayerBoardL->setGeometry(QRect(50, 270, 200, 100));
        lblPlayerBoardL->setMouseTracking(true);
        lblPlayerBoardL->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblLife3PB = new QLabel(clientingame);
        lblLife3PB->setObjectName(QStringLiteral("lblLife3PB"));
        lblLife3PB->setGeometry(QRect(320, 590, 20, 20));
        lblLife3PB->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblTop2Score = new QLabel(clientingame);
        lblTop2Score->setObjectName(QStringLiteral("lblTop2Score"));
        lblTop2Score->setGeometry(QRect(565, 15, 61, 17));
        lblTop2Score->setFont(font);
        lblTop2Score->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(0, 200, 0);\n"
"text-align: center;"));
        lblTop2Score->setFrameShadow(QFrame::Plain);
        gameCourt = new QWidget(clientingame);
        gameCourt->setObjectName(QStringLiteral("gameCourt"));
        gameCourt->setEnabled(true);
        gameCourt->setGeometry(QRect(260, 110, 450, 450));
        gameCourt->setMouseTracking(true);
        gameCourt->setStyleSheet(QLatin1String(".QWidget#gameCourt {\n"
"background-image: url(:/images/gameCourtBackground.png);\n"
"background-position: center;\n"
"border: 3px solid rgb(137, 255, 200);\n"
"box-shadow: 10px 10px 30px rgb(0, 0, 0);\n"
"}"));
        lblBall_2 = new QLabel(gameCourt);
        lblBall_2->setObjectName(QStringLiteral("lblBall_2"));
        lblBall_2->setGeometry(QRect(220, 210, 30, 30));
        lblBall_2->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 15px;"));
        paddle_0 = new QLabel(gameCourt);
        paddle_0->setObjectName(QStringLiteral("paddle_0"));
        paddle_0->setGeometry(QRect(170, 420, 101, 17));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(paddle_0->sizePolicy().hasHeightForWidth());
        paddle_0->setSizePolicy(sizePolicy);
        paddle_0->setBaseSize(QSize(0, 0));
        paddle_0->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;"));
        paddle_0->setFrameShadow(QFrame::Raised);
        paddle_1 = new QLabel(gameCourt);
        paddle_1->setObjectName(QStringLiteral("paddle_1"));
        paddle_1->setGeometry(QRect(10, 120, 17, 101));
        sizePolicy.setHeightForWidth(paddle_1->sizePolicy().hasHeightForWidth());
        paddle_1->setSizePolicy(sizePolicy);
        paddle_1->setBaseSize(QSize(0, 0));
        paddle_1->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;"));
        paddle_1->setFrameShadow(QFrame::Raised);
        paddle_3 = new QLabel(gameCourt);
        paddle_3->setObjectName(QStringLiteral("paddle_3"));
        paddle_3->setGeometry(QRect(420, 120, 17, 101));
        sizePolicy.setHeightForWidth(paddle_3->sizePolicy().hasHeightForWidth());
        paddle_3->setSizePolicy(sizePolicy);
        paddle_3->setBaseSize(QSize(0, 0));
        paddle_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;"));
        paddle_3->setFrameShadow(QFrame::Raised);
        paddle_2 = new QLabel(gameCourt);
        paddle_2->setObjectName(QStringLiteral("paddle_2"));
        paddle_2->setGeometry(QRect(140, 10, 101, 17));
        sizePolicy.setHeightForWidth(paddle_2->sizePolicy().hasHeightForWidth());
        paddle_2->setSizePolicy(sizePolicy);
        paddle_2->setBaseSize(QSize(0, 0));
        paddle_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;"));
        paddle_2->setFrameShadow(QFrame::Raised);
        lblLeaderBoardTitle = new QLabel(clientingame);
        lblLeaderBoardTitle->setObjectName(QStringLiteral("lblLeaderBoardTitle"));
        lblLeaderBoardTitle->setGeometry(QRect(185, 15, 81, 20));
        lblLeaderBoardTitle->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblLife5PR = new QLabel(clientingame);
        lblLife5PR->setObjectName(QStringLiteral("lblLife5PR"));
        lblLife5PR->setGeometry(QRect(845, 290, 20, 20));
        lblLife5PR->setStyleSheet(QLatin1String("background-color: rgb(0, 200, 0);\n"
"border-radius: 10px;"));
        lblTop2Usrnm = new QLabel(clientingame);
        lblTop2Usrnm->setObjectName(QStringLiteral("lblTop2Usrnm"));
        lblTop2Usrnm->setGeometry(QRect(495, 15, 61, 20));
        lblTop2Usrnm->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblTop3Usrnm = new QLabel(clientingame);
        lblTop3Usrnm->setObjectName(QStringLiteral("lblTop3Usrnm"));
        lblTop3Usrnm->setGeometry(QRect(665, 15, 61, 20));
        lblTop3Usrnm->setStyleSheet(QLatin1String("background-color: rgb(104,104,104);\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lblPlayerBoardT = new QLabel(clientingame);
        lblPlayerBoardT->setObjectName(QStringLiteral("lblPlayerBoardT"));
        lblPlayerBoardT->setGeometry(QRect(260, 55, 451, 50));
        lblPlayerBoardT->setMouseTracking(true);
        lblPlayerBoardT->setStyleSheet(QLatin1String("background-color: rgb(71, 71, 71);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 4px;"));
        lblPlayerBoardT->raise();
        lblPlayerBoardL->raise();
        gameCourt->raise();
        lblPlayerBoardB->raise();
        lblPlayerBoardR->raise();
        lblLeaderBoard->raise();
        lblUsernamePT->raise();
        lblLife4PT->raise();
        lblScorePT->raise();
        lblScorePR->raise();
        lblLife6PT->raise();
        lblLife2PL->raise();
        lblLife7PT->raise();
        lblLife3PT->raise();
        lblLife1PR->raise();
        lblLife7PR->raise();
        lblLife2PB->raise();
        lblLife4PR->raise();
        lblLife2PT->raise();
        lblTop3Score->raise();
        lblUsernamePB->raise();
        lblLife5PT->raise();
        lblLife3PL->raise();
        lblTop1Usrnm->raise();
        lblLife3PR->raise();
        lblLife4PB->raise();
        lblScorePB->raise();
        lblLife6PR->raise();
        lblUsernamePR->raise();
        lblLife5PB->raise();
        lblLife7PB->raise();
        lblLife7PL->raise();
        lblTop1Score->raise();
        lblLife2PR->raise();
        lblLife1PB->raise();
        lblLife1PL->raise();
        lblScorePL->raise();
        lblLife1PT->raise();
        lblUsernamePL->raise();
        lblLife5PL->raise();
        lblLife4PL->raise();
        lblLife6PB->raise();
        lblLife6PL->raise();
        lblLife3PB->raise();
        lblTop2Score->raise();
        lblLeaderBoardTitle->raise();
        lblLife5PR->raise();
        lblTop2Usrnm->raise();
        lblTop3Usrnm->raise();

        retranslateUi(clientingame);

        QMetaObject::connectSlotsByName(clientingame);
    } // setupUi

    void retranslateUi(QWidget *clientingame)
    {
        clientingame->setWindowTitle(QApplication::translate("clientingame", "All-4-Pong", 0));
        lblPlayerBoardR->setText(QString());
        lblUsernamePT->setText(QApplication::translate("clientingame", "Crusher", 0));
        lblLife4PT->setText(QString());
        lblScorePT->setText(QApplication::translate("clientingame", "1550", 0));
        lblScorePR->setText(QApplication::translate("clientingame", "900", 0));
        lblLife6PT->setText(QString());
        lblLife2PL->setText(QString());
        lblLife7PT->setText(QString());
        lblLife3PT->setText(QString());
        lblLife1PR->setText(QString());
        lblLife7PR->setText(QString());
        lblLife2PB->setText(QString());
        lblLife4PR->setText(QString());
        lblLife2PT->setText(QString());
        lblTop3Score->setText(QApplication::translate("clientingame", "3150", 0));
        lblUsernamePB->setText(QApplication::translate("clientingame", "The Slammer", 0));
        lblLife5PT->setText(QString());
        lblLife3PL->setText(QString());
        lblTop1Usrnm->setText(QApplication::translate("clientingame", "Fred", 0));
        lblLife3PR->setText(QString());
        lblLife4PB->setText(QString());
        lblScorePB->setText(QApplication::translate("clientingame", "2050", 0));
        lblLeaderBoard->setText(QString());
        lblLife6PR->setText(QString());
        lblUsernamePR->setText(QApplication::translate("clientingame", "Simply Smashing", 0));
        lblLife5PB->setText(QString());
        lblLife7PB->setText(QString());
        lblLife7PL->setText(QString());
        lblTop1Score->setText(QApplication::translate("clientingame", "4000", 0));
        lblLife2PR->setText(QString());
        lblPlayerBoardB->setText(QString());
        lblLife1PB->setText(QString());
        lblLife1PL->setText(QString());
        lblScorePL->setText(QApplication::translate("clientingame", "3750", 0));
        lblLife1PT->setText(QString());
        lblUsernamePL->setText(QApplication::translate("clientingame", "Dr. Steven Jones", 0));
        lblLife5PL->setText(QString());
        lblLife4PL->setText(QString());
        lblLife6PB->setText(QString());
        lblLife6PL->setText(QString());
        lblPlayerBoardL->setText(QString());
        lblLife3PB->setText(QString());
        lblTop2Score->setText(QApplication::translate("clientingame", "3550", 0));
        lblBall_2->setText(QString());
        paddle_0->setText(QString());
        paddle_1->setText(QString());
        paddle_3->setText(QString());
        paddle_2->setText(QString());
        lblLeaderBoardTitle->setText(QApplication::translate("clientingame", "Top Scores", 0));
        lblLife5PR->setText(QString());
        lblTop2Usrnm->setText(QApplication::translate("clientingame", "Sara", 0));
        lblTop3Usrnm->setText(QApplication::translate("clientingame", "Luke", 0));
        lblPlayerBoardT->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class clientingame: public Ui_clientingame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTINGAME_H
