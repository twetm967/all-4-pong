
#include "World.h"
#include <cassert>

World* World::instance=NULL;

//World::World(){}




void World::setUp(int Players,int diff,bool power){

    worldMouse = new QPoint();
    Player* in;
    for (int i = 0; i < Players && i<4; ++i){

        in = new User();
        GamePlayers.push_back(in);

    }
    int q = 4 - Players;

    if (q > 0){

        for (int i = 0; i<q; ++i){
            in = new AI(diff);
            GamePlayers.push_back(in);
        }
    }

    qDebug() << GamePlayers.size();
    assert(GamePlayers.size() == 4);

    difficulty = diff;
    qDebug() << QString::number(difficulty);
 //   gameScreen = inStart->getInGame();

    powerUps = power;

}




    // update all elements in this game world
    void World::UpdateWorld() {

    }

    // prints the current world state out to offshore text file,
    // returning a boolean value indicating print success
    bool World::printWorldInfo() {
        bool didPrint = false;

        // establish connection with text file

        if (/*connection succeeds*/ true) {
            // gather object state and concatenate into string
            // print string of state to text file
            didPrint = true;
        }

        return didPrint;
    }

    // reads the current world state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores world state in instance variables
    bool World::readWorldInfo() {
        bool didRead = false;

        // establish connection with text file

        if (/*connection succeeds*/ true) {
            // read string of state from text file
            // parse string and store object state in instance variables
            didRead = true;
        }

        return didRead;
    }





