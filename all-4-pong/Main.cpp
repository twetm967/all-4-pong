#include <vector>
#include <QApplication>
#include "start.h"
#include "ingame.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Start w;
    w.show();
    
    return a.exec();
}
