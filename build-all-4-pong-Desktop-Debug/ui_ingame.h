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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InGame
{
public:
    QLabel *label;

    void setupUi(QWidget *InGame)
    {
        if (InGame->objectName().isEmpty())
            InGame->setObjectName(QStringLiteral("InGame"));
        InGame->resize(720, 720);
        label = new QLabel(InGame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 310, 291, 31));
        label->setTextFormat(Qt::RichText);

        retranslateUi(InGame);

        QMetaObject::connectSlotsByName(InGame);
    } // setupUi

    void retranslateUi(QWidget *InGame)
    {
        InGame->setWindowTitle(QApplication::translate("InGame", "Form", 0));
        label->setText(QApplication::translate("InGame", "This Window will actually play the game!!!!!!", 0));
    } // retranslateUi

};

namespace Ui {
    class InGame: public Ui_InGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGAME_H
