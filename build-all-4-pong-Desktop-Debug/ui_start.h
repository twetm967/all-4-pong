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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Start
{
public:
    QWidget *centralwidget;
    QPushButton *start_Btn;
    QComboBox *players_comboBox;
    QLabel *label;
    QComboBox *dif_comboBox_;
    QLabel *label_2;
    QCheckBox *power_checkBox;
    QLabel *lblConnected;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Start)
    {
        if (Start->objectName().isEmpty())
            Start->setObjectName(QStringLiteral("Start"));
        Start->setEnabled(true);
        Start->resize(594, 389);
        centralwidget = new QWidget(Start);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        start_Btn = new QPushButton(centralwidget);
        start_Btn->setObjectName(QStringLiteral("start_Btn"));
        start_Btn->setEnabled(false);
        start_Btn->setGeometry(QRect(400, 280, 98, 27));
        players_comboBox = new QComboBox(centralwidget);
        players_comboBox->setObjectName(QStringLiteral("players_comboBox"));
        players_comboBox->setGeometry(QRect(30, 50, 61, 27));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 141, 17));
        dif_comboBox_ = new QComboBox(centralwidget);
        dif_comboBox_->setObjectName(QStringLiteral("dif_comboBox_"));
        dif_comboBox_->setGeometry(QRect(30, 120, 61, 27));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 66, 17));
        power_checkBox = new QCheckBox(centralwidget);
        power_checkBox->setObjectName(QStringLiteral("power_checkBox"));
        power_checkBox->setGeometry(QRect(30, 170, 101, 22));
        lblConnected = new QLabel(centralwidget);
        lblConnected->setObjectName(QStringLiteral("lblConnected"));
        lblConnected->setGeometry(QRect(310, 40, 201, 31));
        Start->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Start);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 594, 25));
        Start->setMenuBar(menubar);
        statusbar = new QStatusBar(Start);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Start->setStatusBar(statusbar);

        retranslateUi(Start);

        QMetaObject::connectSlotsByName(Start);
    } // setupUi

    void retranslateUi(QMainWindow *Start)
    {
        Start->setWindowTitle(QApplication::translate("Start", "MainWindow", 0));
        start_Btn->setText(QApplication::translate("Start", "Start", 0));
        players_comboBox->clear();
        players_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Start", "1", 0)
         << QApplication::translate("Start", "2", 0)
         << QApplication::translate("Start", "3", 0)
         << QApplication::translate("Start", "4", 0)
        );
        label->setText(QApplication::translate("Start", "Number of players:", 0));
        dif_comboBox_->clear();
        dif_comboBox_->insertItems(0, QStringList()
         << QApplication::translate("Start", "1", 0)
         << QApplication::translate("Start", "2", 0)
         << QApplication::translate("Start", "3", 0)
        );
        label_2->setText(QApplication::translate("Start", "Difficulty", 0));
        power_checkBox->setText(QApplication::translate("Start", "Power-Ups", 0));
        lblConnected->setText(QApplication::translate("Start", "Users: ", 0));
    } // retranslateUi

};

namespace Ui {
    class Start: public Ui_Start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
