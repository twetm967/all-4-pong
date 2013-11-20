#ifndef GAMELABEL_H
#define GAMELABEL_H
#include <QLabel>
#include <QWidget>
#include <QString>
#include <Object.h>

class Object;

class GameLabel: public QLabel
{
    QWidget *win;
    Object *obj;
    int i;

public:
    explicit GameLabel(QWidget *parent, QString objType): QLabel(parent), win(parent) {
        this->initializeObj(objType);

    }

    explicit GameLabel(QWidget *parent): QLabel(parent) { }

    void setWin(QWidget *parent) {win = parent;}
    void initializeObj(QString objType);
    Object* getObj() {return obj;}
    void setObj(Object* inObj){obj = inObj;}
    void updatePosition();

};

#endif // GAMELABEL_H
