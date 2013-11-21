#ifndef CLIENTINGAME_H
#define CLIENTINGAME_H

#include <QWidget>
#include <QMouseEvent>
#include <vector>
#include <QString>
#include <QLabel>
using namespace std;
namespace Ui {
class clientingame;
}

class clientingame : public QWidget
{
    Q_OBJECT
    //test here
public:
    explicit clientingame(QWidget *parent = 0);
    ~clientingame();
    int getX() {return x;}
    int getY() {return y;}
    void mouseMoveEvent(QMouseEvent *ev);
    void MoveLabels(std::vector<QString> *v);
    void HealthDamage(int index, int health);
    void resethealth();
private slots:
//hello
    
private:
    Ui::clientingame *ui;
    vector<QLabel*> Health;
    int x;
    int y;
};

#endif // CLIENTINGAME_H
