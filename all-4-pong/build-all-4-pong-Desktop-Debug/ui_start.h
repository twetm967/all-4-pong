/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Start
{
public:
    QAction *actionAbout;
    QAction *actionH;
    QWidget *centralwidget;
    QPushButton *start_Btn;
    QComboBox *players_comboBox;
    QLabel *label;
    QComboBox *dif_comboBox_;
    QLabel *label_2;
    QCheckBox *power_checkBox;
    QLabel *lblConnected;
    QLabel *lblBckgrndImg;
    QMenuBar *menubar;
    QMenu *menuAll_4_Pong;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Start)
    {
        if (Start->objectName().isEmpty())
            Start->setObjectName(QStringLiteral("Start"));
        Start->setEnabled(true);
        Start->resize(1125, 633);
        actionAbout = new QAction(Start);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionH = new QAction(Start);
        actionH->setObjectName(QStringLiteral("actionH"));
        centralwidget = new QWidget(Start);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        start_Btn = new QPushButton(centralwidget);
        start_Btn->setObjectName(QStringLiteral("start_Btn"));
        start_Btn->setEnabled(true);
        start_Btn->setGeometry(QRect(600, 90, 131, 121));
        start_Btn->setFocusPolicy(Qt::NoFocus);
        start_Btn->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 48px;"));
        players_comboBox = new QComboBox(centralwidget);
        players_comboBox->setObjectName(QStringLiteral("players_comboBox"));
        players_comboBox->setGeometry(QRect(300, 460, 61, 27));
        QFont font;
        font.setPointSize(11);
        players_comboBox->setFont(font);
        players_comboBox->setStyleSheet(QLatin1String("color: rgb(71, 71, 71);\n"
"background-color: rgb(0, 200, 0);\n"
"border: 1px solid rgb(0, 200, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 460, 201, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 200, 0);"));
        dif_comboBox_ = new QComboBox(centralwidget);
        dif_comboBox_->setObjectName(QStringLiteral("dif_comboBox_"));
        dif_comboBox_->setGeometry(QRect(620, 460, 61, 27));
        dif_comboBox_->setStyleSheet(QLatin1String("color: rgb(71, 71, 71);\n"
"background-color: rgb(0, 200, 0);\n"
"border: 1px solid rgb(0, 200, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(510, 460, 101, 31));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(0, 200, 0);"));
        power_checkBox = new QCheckBox(centralwidget);
        power_checkBox->setObjectName(QStringLiteral("power_checkBox"));
        power_checkBox->setGeometry(QRect(810, 460, 141, 31));
        power_checkBox->setFont(font1);
        power_checkBox->setStyleSheet(QLatin1String("color: rgb(0,200,0);\n"
"background-color: rgba(0, 200, 255, 0);"));
        lblConnected = new QLabel(centralwidget);
        lblConnected->setObjectName(QStringLiteral("lblConnected"));
        lblConnected->setGeometry(QRect(840, 220, 151, 31));
        lblConnected->setFont(font1);
        lblConnected->setStyleSheet(QStringLiteral("color: rgb(0, 200, 0);"));
        lblBckgrndImg = new QLabel(centralwidget);
        lblBckgrndImg->setObjectName(QStringLiteral("lblBckgrndImg"));
        lblBckgrndImg->setGeometry(QRect(0, 0, 1125, 633));
        lblBckgrndImg->setPixmap(QPixmap(QString::fromUtf8(":/images/a-4-p-main-menu-background.png")));
        Start->setCentralWidget(centralwidget);
        lblBckgrndImg->raise();
        start_Btn->raise();
        players_comboBox->raise();
        label->raise();
        dif_comboBox_->raise();
        label_2->raise();
        power_checkBox->raise();
        lblConnected->raise();
        menubar = new QMenuBar(Start);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1125, 25));
        menuAll_4_Pong = new QMenu(menubar);
        menuAll_4_Pong->setObjectName(QStringLiteral("menuAll_4_Pong"));
        menuAbout = new QMenu(menuAll_4_Pong);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        Start->setMenuBar(menubar);
        statusbar = new QStatusBar(Start);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Start->setStatusBar(statusbar);

        menubar->addAction(menuAll_4_Pong->menuAction());
        menuAll_4_Pong->addSeparator();
        menuAll_4_Pong->addAction(menuAbout->menuAction());

        retranslateUi(Start);

        QMetaObject::connectSlotsByName(Start);
    } // setupUi

    void retranslateUi(QMainWindow *Start)
    {
        Start->setWindowTitle(QApplication::translate("Start", "All-4-Pong", 0));
        actionAbout->setText(QApplication::translate("Start", "About", 0));
        actionH->setText(QApplication::translate("Start", "H", 0));
        start_Btn->setText(QApplication::translate("Start", "Start", 0));
        players_comboBox->clear();
        players_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Start", "1", 0)
         << QApplication::translate("Start", "2", 0)
         << QApplication::translate("Start", "3", 0)
         << QApplication::translate("Start", "4", 0)
        );
        label->setText(QApplication::translate("Start", "Number of Players", 0));
        dif_comboBox_->clear();
        dif_comboBox_->insertItems(0, QStringList()
         << QApplication::translate("Start", "1", 0)
         << QApplication::translate("Start", "2", 0)
         << QApplication::translate("Start", "3", 0)
        );
        label_2->setText(QApplication::translate("Start", "Difficulty", 0));
        power_checkBox->setText(QApplication::translate("Start", "Power-Ups", 0));
        lblConnected->setText(QApplication::translate("Start", "Users: ", 0));
        lblBckgrndImg->setText(QString());
        menuAll_4_Pong->setTitle(QApplication::translate("Start", "Help", 0));
        menuAbout->setTitle(QApplication::translate("Start", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class Start: public Ui_Start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
