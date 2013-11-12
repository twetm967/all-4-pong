
#include "World.h"
#include <cassert>

World* World::instance=NULL;

/*
void World::setUp(int Players,int diff,bool power){

    counter = 0;

    Player* in;
    numberDead = 0;
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
*/



QString World::getBlock(){
    if(powerUps)
     counter++;
    if(counter == 1000){
        counter = 0;
        qDebug()<<"make a random object"<< endl;

        return "Shapes";
    }
    return NULL;
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

        for( int i = 0; i < objects.size();++i){
            delete objects.at(i);
        }
        GamePlayers.clear();
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
        numberDead = 4;

        for (int i = 0; i < num && i<4; ++i){
            GamePlayers.push_back(new User());
            numberDead--;

        }

        if (4 - num > 0){
            for (int i = 0; i< 4 - num; ++i) {
                GamePlayers.push_back(new AI(difficulty));
                numberDead--;
            }
        }
    }


    void World::pointScoredReset() {
        foreach (Player *play, GamePlayers) {
            play->reset();
        }
        if(numberDead == 3){
            qDebug() << "All the players are defeated" << endl << "Run end game logic" << endl;
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

        //for (int i = 0; i<GamePlayers.size(); ++i){
           // Player* thisPlayer = GamePlayers.at(i);
           // netString += thisPlayer->getNet();
       // }
        for (int i = 0; i<objects.size(); ++i){
               Object* thisball = objects.at(i);
               netString += thisball->getNet();
               qDebug() << netString << "\n";
        }

        /*for (int i = 0; i<balls.size(); ++i){
                       Ball* thisball = balls.at(i);
                       netString += thisball->getNet();
                       //qDebug() << netString << "\n";
        }*/

        return netString;
    }

    vector<QString> *World::split(QString str, char delim){
        //vector<QString> Split(string str, char delim){
        vector<QString> *splitV = new vector<QString>();
        QString buf = "";
        int i = 0;
        while (i < str.length()){
            if (str[i] != delim){
                buf += str[i];
            } else if (buf.length() > 0) {
                splitV->push_back(buf);
                buf = "";
            }
            i++;
        }
        if (!buf.isEmpty())
            splitV->push_back(buf);
        return splitV;
    }

    void World::updateUser(QString str){
        vector<QString> *splitV = split(str, '/');
        for (Player* thisUser : GamePlayers){
            if (thisUser->getID() == splitV->at(0).toInt()){
                thisUser->setUsername(splitV->at(1));
                thisUser->setPoint(splitV->at(2).toInt(), splitV->at(3).toInt());

            }
        }
    }

