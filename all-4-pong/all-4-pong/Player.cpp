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
        World::getInstance()->died();
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
        followRandom(12,2);
        break;
    case 2:
        followRandom(20,3);
        break;
    case 3:
        followRandom(30,5);
        break;
    }
}


//the medium setting
//under construction!!
void AI::followRandom(int big, int min){
    Ball* ball = World::getInstance()->getBalls().at(0);
    int x = ball->getX();
    int y = ball->getY();

    speed = rand() % big;
    if(speed < min )speed = min;

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


