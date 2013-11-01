#ifndef INGAME_H
#define INGAME_H

#include <QWidget>

namespace Ui {
class ingame;
}

class ingame : public QWidget
{
    Q_OBJECT
    
public:
    explicit ingame(QWidget *parent = 0);
    ~ingame();
    
private:
    Ui::ingame *ui;
};

#endif // INGAME_H
