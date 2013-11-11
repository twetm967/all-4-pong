#ifndef CLIENTINGAME_H
#define CLIENTINGAME_H

#include <QWidget>
#include <QMouseEvent>
#include <vector>
#include <QString>

namespace Ui {
class clientingame;
}

class clientingame : public QWidget
{
    Q_OBJECT
    
public:
    explicit clientingame(QWidget *parent = 0);
    ~clientingame();
    int getX() {return x;}
    int getY() {return y;}
    void mouseMoveEvent(QMouseEvent *ev);
    void MoveLabels(std::vector<QString> *v);
private slots:

    
private:
    Ui::clientingame *ui;
    int x;
    int y;
};

#endif // CLIENTINGAME_H
