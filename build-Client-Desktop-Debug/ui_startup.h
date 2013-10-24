/********************************************************************************
** Form generated from reading UI file 'startup.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUP_H
#define UI_STARTUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Startup
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *IP_line;
    QPushButton *connect_Btn;
    QLineEdit *username_line;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Startup)
    {
        if (Startup->objectName().isEmpty())
            Startup->setObjectName(QStringLiteral("Startup"));
        Startup->resize(400, 300);
        centralWidget = new QWidget(Startup);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 71, 20));
        IP_line = new QLineEdit(centralWidget);
        IP_line->setObjectName(QStringLiteral("IP_line"));
        IP_line->setGeometry(QRect(100, 60, 171, 27));
        connect_Btn = new QPushButton(centralWidget);
        connect_Btn->setObjectName(QStringLiteral("connect_Btn"));
        connect_Btn->setGeometry(QRect(260, 180, 98, 27));
        username_line = new QLineEdit(centralWidget);
        username_line->setObjectName(QStringLiteral("username_line"));
        username_line->setGeometry(QRect(100, 100, 113, 27));
        Startup->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Startup);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        Startup->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Startup);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Startup->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Startup);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Startup->setStatusBar(statusBar);

        retranslateUi(Startup);

        QMetaObject::connectSlotsByName(Startup);
    } // setupUi

    void retranslateUi(QMainWindow *Startup)
    {
        Startup->setWindowTitle(QApplication::translate("Startup", "Startup", 0));
        label->setText(QApplication::translate("Startup", "Client GUI", 0));
        IP_line->setText(QApplication::translate("Startup", "Host's IP Address...", 0));
        connect_Btn->setText(QApplication::translate("Startup", "Connect", 0));
        username_line->setText(QApplication::translate("Startup", "Username...", 0));
    } // retranslateUi

};

namespace Ui {
    class Startup: public Ui_Startup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_H
