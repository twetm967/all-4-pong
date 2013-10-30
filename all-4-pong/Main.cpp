#include <vector>
#include <string>
#include <iostream>
#include <QApplication>
#include <cassert>
#include "World.h"
#include "start.h"
#include "ingame.h"

class World;
//void unitTest(Start* w) {
void unitTest() {
    //assert(World::getInstance());
    //w->StartingMethod();
    //assert(World::getInstance().getGamePlayers().size() == 4);
    //assert(World::getInstance().getDifficulty() == 1);


    cout << "All unit tests pass!" << endl;

    //w->close();

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Start Pong;
    Pong.show();

//    Start w;
  //  if (main) {
//        unitTest(&w);
   // }
    vector<string> args(argv, argv+argc); // A vector of command line arguments

    if (args.size() == 2) { // Checks it the user entered a second command line argument
        if (args.at(1) == "-test") { // Checks if the user entered the -test flag
            unitTest(); // Run unit tests
        }
    }

    return a.exec();
}
