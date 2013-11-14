
#include "World.h"
#include <cassert>

World* World::instance=NULL;

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


    ofstream* stream = new ofstream;

    stream->open("save_file.txt");

    if(stream->is_open()){
        for(int i = 0; i < objects.size(); i++){
            objects.at(i)->printInfo(stream);
        }
    }

    *stream << "/" << powerUps << "/" << difficulty << "/" << endl;
    // establish connection with text file
stream->close();

}

// reads the current world state from offshore text file,
// returning a boolean value indicaing read success;
// if read succeeds, stores world state in instance variables
bool World::readWorldInfo() {





    // establish connection with text file

}

void World::setupPlayers(int num) {
    numberDead = 4;

    for (int i = 0; i < num && i<4; ++i){
        Player *thisUser = new User();
        GamePlayers.push_back(thisUser);
        thisUser->setUsername("User");
        numberDead--;

    }

    if (4 - num > 0){
        for (int i = 0; i< 4 - num; ++i) {
            Player *thisPlayer = new AI(difficulty);
            GamePlayers.push_back(thisPlayer);
            thisPlayer->setUsername("AI");
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
        gameOver();
    }
}

void World::gameOver(){
    //game over logic.
    //ends the game
    //saves high scores
    //displays gameover text.
}



QString World::getNetwork(){
    QString netString;
    for (int i = 0; i<objects.size(); ++i){
        Object* thisball = objects.at(i);
        netString += thisball->getNet();
        qDebug() << netString << "\n";
    }
    return netString;
}

vector<QString> *World::split(QString str, char delim){
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
    Player *thisUser = getGamePlayer(splitV->at(0).toInt());

    thisUser->setUsername(splitV->at(1));
    thisUser->setPoint(splitV->at(2).toInt(), splitV->at(3).toInt());


}


