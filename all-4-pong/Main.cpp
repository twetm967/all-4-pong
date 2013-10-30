#include <vector>
#include <string>
#include <iostream>
#include <QApplication>
#include <cassert>
#include "start.h"
#include "World.h"
#include "ingame.h"

void unitTest() {
    assert(World::getInstance());

    cout << "All unit tests pass!" << endl;
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Start w;
    w.show();
    
    if (main) {
        unitTest();
    }

    return a.exec();
}
