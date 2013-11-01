
#include "Player.h"
#include "World.h"
#include "ingame.h"
int Player::nextID = 0;


Player::Player(){
    ID = nextID;

    Health = 7;

    nextID++;
    hand = World::getInstance()->getMouse();
}

QPoint* Player::getHand(){


return  World::getInstance()->getMouse();
}
Player::~Player(){


}

QPoint* User::getHand(){
    hand = World::getInstance()->getMouse();
    return hand;
}

QPoint *AI::getHand(){

    change();
    return AIPoint;
}

void AI::change(){
    if(flop){
        AIPoint->setX(AIPoint->x()-5);
    AIPoint->setY(AIPoint->y()+5);

    if(AIPoint->x() < 0 || AIPoint->y() > 355){
        flop = false;
    }

    }else {
        if(!flop){
            AIPoint->setX(AIPoint->x()+5);
            AIPoint->setY(AIPoint->y()- 5) ;

            if(AIPoint->y() < 0){
                flop = true;

            }
        }
}
}

void Player::damage(){

Health--;

}



