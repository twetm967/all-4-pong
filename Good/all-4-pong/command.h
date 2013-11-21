#ifndef COMMAND_H
#define COMMAND_H
#include <QMouseEvent>
#include <QPoint>

class Command
{
    QPoint Q;

public:
    Command();

    QPoint getPoint();

};

#endif // COMMAND_H
