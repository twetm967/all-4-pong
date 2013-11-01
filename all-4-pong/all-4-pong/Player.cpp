
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

    AIPoint->setX(ball->getX() - 50);
    AIPoint->setY(ball->getY() - 50);
    /*
   vector<Ball*> balls = World::getInstance()->getBalls();
   vector<int> distance;
   Ball* ball;
   for(int i = 0; i < balls.size(); i ++){
       ball = balls.at(i);

       AIPoint->setX(ball->getX());
       AIPoint->setY(ball->getY());
}*/

   }




//the medium setting
//under construction!!
void AI::followRandom(){
    Ball* ball = World::getInstance()->getBalls().at(0);

    AIPoint->setX((ball->getX() - 50) +(rand()%50 - 25));
    AIPoint->setY((ball->getY() - 50) +(rand()%50 - 25));
}
//the easy setting
void AI::change(){
    if(flop){
        AIPoint->setX(AIPoint->x()-10);
    AIPoint->setY(AIPoint->y()+ 10);

    if(AIPoint->x() < 0 || AIPoint->y() > 355){
        flop = false;
    }

    }else {
        if(!flop){
            AIPoint->setX(AIPoint->x()+ 10);
            AIPoint->setY(AIPoint->y()- 10) ;

            if(AIPoint->y() < 0){
                flop = true;

            }
        }
}
}

void Player::damage(){

Health--;

}



