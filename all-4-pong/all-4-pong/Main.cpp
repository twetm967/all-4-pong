#include <vector>
#include <string>
#include <iostream>
#include <QApplication>
#include <cassert>
#include "World.h"
#include "start.h"
#include "ingame.h"

class World;
void unitTest(Start* w) {
    //assert(World::getInstance());
    w->StartingMethod();
    assert(World::getInstance().getGamePlayers().size() == 4);
    assert(World::getInstance().getDifficulty() == 1);


    cout << "All unit tests pass!" << endl;

    w->close();

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Start Pong;
    Pong.show();

//    Start w;
  //  if (main) {
    //    unitTest(&w);
   // }


    return a.exec();
}
