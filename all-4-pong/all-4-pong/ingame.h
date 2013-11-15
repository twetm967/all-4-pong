#ifndef INGAME_H
#define INGAME_H

#include <QWidget>

#include <QLabel>
#include <vector>
#include <QMouseEvent>
#include <QTimer>
#include <iostream>
#include <fstream>


#include "Player.h"
#include "GameLabel.h"
class Start;



using namespace std;
namespace Ui {
    class InGame;
}

class InGame : public QWidget
{



    Q_OBJECT

private:

  Ui::InGame *ui;
  //vector<Player*> Players;
  vector<QLabel*> Health;
  QTimer* timer;
  Start* home;
  int counter;

int i;

public:
    explicit InGame(Start *window, QWidget *parent = 0);

void setUpBlocklbl(GameLabel*);
bool makeBlock(bool);
    void Animate();

    //takes the player, and the amount of health he has left.
    void HealthDamage(int index, int health);

    QPoint getGameCourt(QPoint in);

    ~InGame();
    
private slots:
    void on_btnPause_clicked();
    void mouseMoveEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent *);

    void timerHit();


    void on_btnCheat_clicked();
    void on_btnHome_clicked();
};

#endif // INGAME_H
