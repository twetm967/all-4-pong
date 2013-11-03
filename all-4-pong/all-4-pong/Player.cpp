
#include "Player.h"
#include "World.h"
#include "ingame.h"
#include "Ball.h"
int Player::nextID = 0;


Player::Player(){
    ID = nextID;

    Health = 7;

    nextID++;
    hand = World::getInstance()->getMouse();
}

QPoint* Player::getHand(){


return World::getInstance()->getMouse();
}
Player::~Player(){


}

QPoint* User::getHand(){
    hand = World::getInstance()->getMouse();
    return hand;
}

QPoint *AI::getHand(){

    command();
    return AIPoint;
}

void AI::command(){
    switch(difficulty){
    case 1:
        change();
        break;
    case 2:
        followRandom();
        break;
    case 3:
        follow();
        break;
    }
}
//the hard setting literally they are perfect!
void AI::follow(){
    Ball* ball = World::getInstance()->getBalls().at(0);
    specialNumber = ball->getSpeed();
    AIPoint->setX(ball->getX());
    AIPoint->setY(ball->getY());
   }

//the medium setting
//under construction!!
void AI::followRandom(){
    Ball* ball = World::getInstance()->getBalls().at(0);
    int x = ball->getX();
    int y = ball->getY();

    specialNumber = rand() % 12;
    if(specialNumber < 6 )specialNumber = 6;

    if(x < AIPoint->x()){
        AIPoint->setX(AIPoint->x() - specialNumber);
    }
    if(x > AIPoint->x()){
        AIPoint->setX(AIPoint->x() + specialNumber);
    }
    if(y < AIPoint->y()){
        AIPoint->setY(AIPoint->y() - specialNumber);
    }
    if(y > AIPoint->y()){
        AIPoint->setY(AIPoint->y() + specialNumber);
    }
}
//the easy setting
void AI::change(){
    specialNumber = rand() % 12;
    if(specialNumber< 5)specialNumber = 6;
    if(flop){
        AIPoint->setX(AIPoint->x() - specialNumber);
        AIPoint->setY(AIPoint->y()+ specialNumber);
        if(AIPoint->x() < 60 || AIPoint->y() > 350)flop = false;
          }else {
             if(!flop){
                AIPoint->setX(AIPoint->x()+ specialNumber);
                AIPoint->setY(AIPoint->y()- specialNumber) ;
                if(AIPoint->y() < 60 || AIPoint->x() > 350) flop = true;
            }
        }
    }

void Player::damage(){

Health--;

}



