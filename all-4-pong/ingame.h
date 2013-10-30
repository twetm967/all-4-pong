#ifndef INGAME_H
#define INGAME_H

#include <QWidget>

#include <QLabel>
#include <vector>
#include "Player.h"

using namespace std;
namespace Ui {
class InGame;
}

class InGame : public QWidget
{
    Q_OBJECT
    
public:
    explicit InGame(QWidget *parent = 0);

    //takes the player, and the amount of health he has left.
    void HealthDamage(int, int );

    ~InGame();
    
private slots:
    void on_btnPause_clicked();


private:
    Ui::InGame *ui;
  vector<Player*> Players;
  vector<QLabel*> Health;

};

#endif // INGAME_H
