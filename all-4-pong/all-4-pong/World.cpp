
#include "World.h"
#include <cassert>

World World::instance;//=NULL;

//World::World(){}


/*
World* World::getInstance(){
   // if (instance == NULL) {
      //  instance = new World();
    //}
    return instance;
}
*/
//sets up the world including wehre the users/AI are
//how much health everyone has. sets scores to zero.
//initiates all of everything.


/*vector<Player*> players;
        vector<Objects*> objects;
        //Map* world = new Map();
        int difficulty;
        int gameMode;
        static World *instance;*/


void World::setUp(Start *inStart){
    int i = 0;

    Player* in;
    for (i; i < inStart->getPlayers() && i<4; ++i){
          //Player *thisPlayer = new User();

/*thisPlayer*/
        in = new User();
        GamePlayers.push_back(in);

    }
    int q = 4 - inStart->getPlayers();

    if (q > 0){
        i = 0;
        for (; i<q; ++i){
            in = new AI();
            GamePlayers.push_back(in);
        }
    }
    qDebug() << GamePlayers.size();
    assert(GamePlayers.size() == 4);

    difficulty = inStart->getDifficulty();
    qDebug() << QString::number(difficulty);
    gameScreen = inStart->getInGame();
    int ii = 15;
    ball = new Ball(ii);

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





