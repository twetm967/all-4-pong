#ifndef CLIENTINGAME_H
#define CLIENTINGAME_H

#include <QWidget>

namespace Ui {
class clientingame;
}

class clientingame : public QWidget
{
    Q_OBJECT
    
public:
    explicit clientingame(QWidget *parent = 0);
    ~clientingame();
    
private:
    Ui::clientingame *ui;
};

#endif // CLIENTINGAME_H
