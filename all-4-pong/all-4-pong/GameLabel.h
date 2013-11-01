#ifndef GAMELABEL_H
#define GAMELABEL_H
#include <QLabel>
#include <QWidget>
#include <QString>
#include <Objects.h>

class Objects;

class GameLabel: public QLabel
{
    QWidget *win;
    Objects *obj;
    int i;

public:
    explicit GameLabel(QWidget *parent, QString objType): QLabel(parent), win(parent) {
        this->initializeObj(objType);

    }

    explicit GameLabel(QWidget *parent): QLabel(parent) { }

    void setWin(QWidget *parent) {win = parent;}
    void initializeObj(QString objType);
    Objects* getObj() {return obj;}

    void updatePosition();

};

#endif // GAMELABEL_H
