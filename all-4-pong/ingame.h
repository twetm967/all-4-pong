#ifndef INGAME_H
#define INGAME_H

#include <QWidget>

#include <QLabel>
#include <vector>
#include <QMouseEvent>
#include <QTimer>

#include "Player.h"



using namespace std;
namespace Ui {
class InGame;
}

class InGame : public QWidget
{



    Q_OBJECT

private:

  Ui::InGame *ui;
  vector<Player*> Players;
  vector<QLabel*> Health;
  QTimer* timer;
int i;

public:
    explicit InGame(QWidget *parent = 0);

    void Animate();

    //takes the player, and the amount of health he has left.
    void HealthDamage(int index, int health);

    QPoint getGameCourt(QPoint in);

    ~InGame();
    
private slots:
    void on_btnPause_clicked();
    void mouseMoveEvent(QMouseEvent*);

    void timerHit();


};

#endif // INGAME_H
