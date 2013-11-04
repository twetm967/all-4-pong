#ifndef CLIENTGAME_H
#define CLIENTGAME_H

#include <QWidget>

namespace Ui {
class clientgame;
}

class clientgame : public QWidget
{
    Q_OBJECT
    
public:
    explicit clientgame(QWidget *parent = 0);
    ~clientgame();
    
private:
    Ui::clientgame *ui;
};

#endif // CLIENTGAME_H
