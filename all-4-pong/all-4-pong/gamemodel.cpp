#include "gamemodel.h"


GameModel GameModel::instance;

GameModel& GameModel::getInstance() { // returns the only instance of the singleton GameModel class
    return instance;
}

GameModel::GameModel() {}
GameModel::~GameModel() {}


void GameModel::giveMouse(QPoint here){
    World::getInstance()->setworldMouse(here);
}

// instructs the current game world to update itself
void GameModel::UpdateWorld() {
    World* world = World::getInstance();
    world->UpdateWorld();
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
