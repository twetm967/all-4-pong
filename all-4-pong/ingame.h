#ifndef INGAME_H
#define INGAME_H

#include <QWidget>

namespace Ui {
class InGame;
}

class InGame : public QWidget
{
    Q_OBJECT
    
public:
    explicit InGame(QWidget *parent = 0);
    ~InGame();
    
private:
    Ui::InGame *ui;
};

#endif // INGAME_H
