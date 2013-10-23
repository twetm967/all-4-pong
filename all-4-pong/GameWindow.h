#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <vector>



namespace Ui {
class Game;
}

class Game : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Game(QWidget *parent = 0);
    ~Game();
    
private:
    Ui::Game *ui;
};

#endif // GAME_H
