
#include "World.h"
#include <cassert>

World* World::instance=NULL;


void World::setUp(int Players,int diff,bool power){


    Player* in;

    for (int i = 0; i < Players && i<4; ++i){
        in = new User();
        GamePlayers.push_back(in);
    }

    int q = 4 - Players;

    if (q > 0){
        for (int i = 0; i<q; ++i) {
            in = new AI(diff);
            GamePlayers.push_back(in);
        }
    }

    difficulty = diff;
    powerUps = power;
    worldSize = 450; //hardCoded right now! Just becuase we don't have different resolutions yet.

}




    // update all elements in this game world
    void World::UpdateWorld() {
        foreach (Object* obj, objects) {
            obj->updatePosition();
        }
    }


    // reset all elements in this game world
    void World::ResetWorld() {
        for( int i = 0; i < GamePlayers.size();++i){
            delete GamePlayers.at(i);
        }
        GamePlayers.clear();
        for( int i = 0; i < objects.size();++i){
            delete objects.at(i);
        }
        objects.clear();
        balls.clear();

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

    void World::setupPlayers(int num) {

        for (int i = 0; i < num && i<4; ++i){
            GamePlayers.push_back(new User());
        }

        if (4 - num > 0){
            for (int i = 0; i< 4 - num; ++i) {
                GamePlayers.push_back(new AI(difficulty));
            }
        }
    }


    void World::pointScoredReset() {
        foreach (Player *play, GamePlayers) {
            play->reset();
        }
    }


    //I am just using this as a reference
    /*vector<Player*> GamePlayers;
        vector<Object*> objects;
        bool powerUps;
        int difficulty;
        QPoint* worldMouse;
        int worldSize;
        bool roundFinished;*/
    QString World::getNetwork(){
        QString netString;

        /*for (int i = 0; i<GamePlayers.size(); ++i){
            Player* thisPlayer = GamePlayers.at(i);
            netString += thisPlayer->getNet();
        }*/
        for (int i = 0; i<balls.size(); ++i){
               Ball* thisball = balls.at(i);
               netString += thisball->getNet();
        }
        return netString;
    }

