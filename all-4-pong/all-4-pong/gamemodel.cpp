#include "gamemodel.h"


GameModel GameModel::instance;

GameModel& GameModel::getInstance() { // returns the only instance of the singleton GameModel class
    return instance;
}

GameModel::GameModel() {}
GameModel::~GameModel() {}

void GameModel::giveStart(Start* Star){
  startScreen = Star;
}

//void GameModel::giveGame(inGame * game){
  //  inGameScreen = game;
//}

void GameModel::setDifficulty(int dif){
    difficulty = dif;
}

void GameModel::setNumOfPlayers(int num){
    numberOfPlayers = num;
}

void GameModel::setPowerUps(bool in){
    powerUps = in;
}

void GameModel::giveMouse(QPoint here){
    World::getInstance()->setworldMouse(here);
}

void GameModel::CreateWorld(){
    World* world = World::getInstance();
    world->setUp(numberOfPlayers,difficulty,powerUps);
}

// instructs the current game world to update itself
void GameModel::UpdateWorld() {
    World* world = World::getInstance();
    world->UpdateWorld();
}

// instructs the current game world to reset itself
void GameModel::resetWorld() {
    World* world = World::getInstance();
    world->ResetWorld();
  //  inGameScreen->close();
    startScreen->show();
}

QString GameModel::Pause(int h){
    if(Timer::getInstance()->getTimer()->isActive() || h == 1){
   Timer::getInstance()->getTimer()->stop();
   return "Play";
    }else{
        Timer::getInstance()->getTimer()->start();
        return "Pause";
    }

}






