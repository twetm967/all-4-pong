#include "Paddle.h"
#include "Player.h"
#include "World.h"
#include "ingame.h"
#include "Ball.h"
#include <iostream>

int Player::nextID = 0;


Player::Player(){

    ID = nextID;

    currentScore = new Score();

    Health = 7;

    nextID++;
    hand = World::getInstance()->getMouse();
}

QPoint* Player::getHand(){
hand = World::getInstance()->getMouse();
return hand;
}


int Player::getSpeed(){
    return speed;
}

void Player::damage() {
    --Health;
    currentScore->decreaseScore();


    cout << "New health of player " << ID << " is " << Health << endl;
    cout << "New score of player " << ID << " is " << currentScore->getCurrentScore() << endl;
    if (Health == 0) {
        foreach (Object * pad, World::getInstance()->getObjects())
            if (pad->getType() == "paddle" && pad->getPlayerId() == ID) {
                pad->eliminate();
                cout << "Moved player " << ID << " off screen." << endl;
            }
    }
}

void Player::point(){
    currentScore->increaseScore();
    cout << "New score of player " << ID << " is " << currentScore->getCurrentScore() << endl;
}

void AI::reset() {
    hand->setX(World::getInstance()->getWorldSize()/2);
    hand->setY(World::getInstance()->getWorldSize()/2);
}

QPoint *AI::getHand(){

    command();

    return hand;
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
    int x = ball->getX();
    int y = ball->getY();

    speed = rand() % 30;
    if(speed < 12 )speed = 12;

    if(x < hand->x()){
        hand->setX(hand->x() - speed);
    }
    if(x > hand->x()){
        hand->setX(hand->x() + speed);
    }
    if(y < hand->y()){
        hand->setY(hand->y() - speed);
    }
    if(y > hand->y()){
        hand->setY(hand->y() + speed);
    }
   }

//the medium setting
//under construction!!
void AI::followRandom(){
    Ball* ball = World::getInstance()->getBalls().at(0);
    int x = ball->getX();
    int y = ball->getY();

    speed = rand() % 20;
    if(speed < 10 )speed = 12;

    if(x < hand->x()){
        hand->setX(hand->x() - speed);
    }
    if(x > hand->x()){
        hand->setX(hand->x() + speed);
    }
    if(y < hand->y()){
        hand->setY(hand->y() - speed);
    }
    if(y > hand->y()){
        hand->setY(hand->y() + speed);
    }
}
//the easy setting
void AI::change(){
    speed = rand() % 12;
    if(speed< 5)speed = 6;
    if(flop){
        hand->setX(hand->x() - speed);
        hand->setY(hand->y()+ speed);
        if(hand->x() < 60 || hand->y() > 350)flop = false;
          }else {
             if(!flop){
                hand->setX(hand->x()+ speed);
                hand->setY(hand->y()- speed) ;
                if(hand->y() < 60 || hand->x() > 350) flop = true;
            }
        }
    }

void User::calculateSpeed(){
    switch(ID){
    case 0:
    case 2:
        if((oldX > 50 && oldX < 400) && (hand->x() > 50 && hand->x() < 400 )){
        speed = abs(oldX - hand->x()); }else { speed = 0;}
        break;
    case 1:
    case 3:
        if((oldY > 50 && oldY < 400) && (hand->y() > 50 && hand->y() < 400 )){
        speed = abs(oldY - hand->y()); }else { speed = 0;}
        break;
    }

}

int User::getSpeed(){
    return speed;
}

QPoint* User::getHand(){

    Player::getHand();
    calculateSpeed();
//qDebug() << speed;
    oldX = hand->x();
    oldY = hand->y();

    return hand;
}

QString Player::getNet(){



    QString str = "1/";

}


