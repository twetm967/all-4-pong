
#include "World.h"
#include <cassert>

World* World::instance=NULL;


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
    difficulty = diff;
    powerUps = power;
    worldSize = 450; //hardCoded right now! Just becuase we don't have different resolutions yet.
    assert(GamePlayers.size() == 4);
}




    // update all elements in this game world
    void World::UpdateWorld() {

    }


    // reset all elements in this game world
    void World::ResetWorld() {
        for( int i = 0; i < GamePlayers.size();){
            delete GamePlayers.at(0);
            GamePlayers.erase(GamePlayers.begin());
        }
        for( int i = 0; i < objects.size();){
            delete objects.at(i);
            objects.erase(objects.begin());
        }
        for(int i = 0; i < balls.size();){
            balls.erase(balls.begin());
        }

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





