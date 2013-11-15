
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
void World::printWorldInfo() {


    ofstream* stream = new ofstream;

    stream->open("save_file.txt");

    if(stream->is_open()){
        for(int i = 0; i < objects.size(); i++){
            objects.at(i)->setInfo(stream);
        }
        *stream << "/" << powerUps << "/" << difficulty << "/" << endl;
        // establish connection with text file
    stream->close();

    }



}

// reads the current world state from offshore text file,
// returning a boolean value indicaing read success;
// if read succeeds, stores world state in instance variables
void World::readWorldInfo() {
    information.clear();

    qDebug() << "We are here";


    fstream* inFile = new fstream;
    inFile->open("save_file.txt");

    if(inFile->eofbit){
    information.push_back("");
    for(int j = 0; ;information.push_back(""),j++){

            getline(*inFile, information.at(j));
            if(information.at(j) == "")break;
        }
        inFile->close();
    }else{//failed
}
        //Ball/225/225/-3/9/-1/
        for(int i = 0; i < information.size() - 1;i++){
            vector<string>* item = splitString(information.at(i),'/');
            Object* obj = new Object();
            if(item->at(0)== "Ball"){
                int initspeed = stoi(item->at(4));


                int x = stoi(item->at(1));
                int y = stoi(item->at(2));
                int ID = stoi(item->at(5));
                obj = new Ball(initspeed, x,y,ID);
                objects.push_back(obj);
}


        }
    }


/*
    for(int j = 0; j < information.size(); j++){
        vector<string>* item = splitString(information.at(j),'/');
        Object* obj = new Object(item->at(0));
        objects.push_back(obj);
        qDebug() << item;
    }
*/

void World::Factory(string objType){
}/*    Object* obj;
  if (objType == "Paddle")
      //make a paddle it is being silly right now
       obj = new paddle();
else if(objType =="Ball")
      obj = new Ball(10);
else if(objType =="Shapes")
      obj = new Shapes();


  objects.push_back(obj);
//  void setUp(int, int, bool);

 }*/

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
    for (int i = 0; i < objects.size(); ++i){
        Object* obj = objects.at(i);
        //testing
        obj->getType();

        netString += obj->getNet();

        qDebug() << netString << "\n";
    }
    return netString;
}

vector<string>* World::splitString(string str, char delim){
    vector<string> *splitV = new vector<string>();
    string buf = "";
    int i = 0;
    while (i < str.size()){
        if (str.at(i) != delim){
            buf += str.at(i);
        } else if (buf.length() > 0) {
            splitV->push_back(buf);
            buf = "";
        }
        i++;
    }
    if (buf != "")
        splitV->push_back(buf);
    return splitV;
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

void World::setPlayerName(QString name, int side){
    Player *inPlayer = getGamePlayer(side);
    inPlayer->setUsername(name);
}


