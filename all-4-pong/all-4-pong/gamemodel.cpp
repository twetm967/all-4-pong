#include "gamemodel.h"

GameModel::GameModel()
{
}

GameModel::~GameModel(){}
void GameModel::setDifficulty(int dif){

    difficulty = dif;
}

void GameModel::setNumOfPlayers(int num){
    numberOfPlayers = num;
}

void GameModel::setPowerUps(bool in){
    powerUps = in;
}


void GameModel::CreateWorld(){
    World* world = World::getInstance();
    world->setUp(numberOfPlayers,difficulty,powerUps);
}
