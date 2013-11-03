#include "gamemodel.h"
#include "World.h"

GameModel GameModel::instance;

GameModel& GameModel::getInstance() { // returns the only instance of the singleton GameModel class
    return instance;
}

GameModel::GameModel() {}
GameModel::~GameModel() {}

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
}









