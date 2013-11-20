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
    QLineEdit *username_line;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *connect_Btn;
    QLabel *wait_lbl;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Startup)
    {
        if (Startup->objectName().isEmpty())
            Startup->setObjectName(QStringLiteral("Startup"));
        Startup->resize(1125, 633);
        QIcon icon;
        QString iconThemeName = QStringLiteral("All-4-Pong");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        Startup->setWindowIcon(icon);
        centralWidget = new QWidget(Startup);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 71, 20));
        IP_line = new QLineEdit(centralWidget);
        IP_line->setObjectName(QStringLiteral("IP_line"));
        IP_line->setGeometry(QRect(710, 420, 171, 27));
        IP_line->setStyleSheet(QLatin1String("color: rgb(71, 71, 71);\n"
"background-color: rgb(0, 200, 0);\n"
"border: 1px solid rgb(0, 200, 0);"));
        username_line = new QLineEdit(centralWidget);
        username_line->setObjectName(QStringLiteral("username_line"));
        username_line->setGeometry(QRect(710, 370, 171, 27));
        username_line->setStyleSheet(QLatin1String("color: rgb(71, 71, 71);\n"
"background-color: rgb(0, 200, 0);\n"
"border: 1px solid rgb(0, 200, 0);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1131, 581));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/a-4-p-main-menu-background.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(580, 370, 111, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(0, 200, 0);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(580, 420, 111, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 200, 0);"));
        connect_Btn = new QPushButton(centralWidget);
        connect_Btn->setObjectName(QStringLiteral("connect_Btn"));
        connect_Btn->setEnabled(true);
        connect_Btn->setGeometry(QRect(600, 80, 131, 121));
        connect_Btn->setFocusPolicy(Qt::NoFocus);
        connect_Btn->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 200, 0);\n"
"border-radius: 48px;"));
        wait_lbl = new QLabel(centralWidget);
        wait_lbl->setObjectName(QStringLiteral("wait_lbl"));
        wait_lbl->setEnabled(true);
        wait_lbl->setGeometry(QRect(10, 420, 371, 31));
        wait_lbl->setFont(font);
        wait_lbl->setStyleSheet(QStringLiteral("color: rgb(0, 200, 0);"));
        Startup->setCentralWidget(centralWidget);
        label_2->raise();
        label->raise();
        IP_line->raise();
        username_line->raise();
        label_3->raise();
        label_4->raise();
        connect_Btn->raise();
        wait_lbl->raise();
        menuBar = new QMenuBar(Startup);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1125, 25));
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
        Startup->setWindowTitle(QApplication::translate("Startup", "All-4-Pong", 0));
        label->setText(QApplication::translate("Startup", "Client GUI", 0));
        IP_line->setText(QString());
        username_line->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Startup", "Username", 0));
        label_4->setText(QApplication::translate("Startup", "Host name", 0));
        connect_Btn->setText(QApplication::translate("Startup", "Connect", 0));
        wait_lbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Startup: public Ui_Startup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_H
