#include "World.h"
#include "start.h"
#include <vector>
#include <QMouseEvent>

World* World::instance=NULL;

World::World(/*int numPlayers, int inGameMode, int inDif*/){
    //init variables

}

World* World::getInstance(){
    if (instance == NULL) {
        instance = new World();
    }
    return instance;
}

//sets up the world including wehre the users/AI are
//how much health everyone has. sets scores to zero.
//initiates all of everything.
void World::setUp(){




    thisIsATest();
}





void World::thisIsATest(){
    int i = 0;
    // while(i < 4){
         players.push_back(new Player());
      //i++;
     //}

   Paddle* pad = players.at(0)->getPaddle();

   pad->mouseMoveEvent();

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





