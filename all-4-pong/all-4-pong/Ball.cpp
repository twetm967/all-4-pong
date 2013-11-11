#include "Object.h"
#include "Ball.h"
#include "World.h"
#include "Paddle.h"
//#include "ui_game.h"
#include <QRect>
#include <QPoint>
#include <vector>
#include <cmath>
#include <QString>
#include <string>
#include <iostream>

///Constructors


Ball::Ball(int initSpeed):Object() {            //takes (speed)
    speed = initSpeed;
    x = World::getInstance()->getWorldSize()/2;
    y = World::getInstance()->getWorldSize()/2;
    radius = World::getInstance()->getWorldSize()/30; //need to determine default radius
    playerId = -1; //need to determine a playerId to use for NULL
    speedX = (pow(-1,rand()%2)) * ((rand() % (speed-2))+1);;
    this->updateSpeedY();
    this->setPoint(); //point used to track the QLabel in the game
    World::getInstance()->add(this);
}

Ball::Ball(int initSpeed, int initX, int initY, int initPlayerId):Object() {
    speed = initSpeed;
    x = initX;
    y = initY;
    playerId = initPlayerId;
    radius = World::getInstance()->getWorldSize()/30; //need to determine default radius; maybe include initRadius in Constructor
    speedX = (pow(-1,rand()%2)) * ((rand() % (speed-2))+1);;
    this->updateSpeedY();
    this->setPoint();
    World::getInstance()->addBall(this);
}




///Methods



// prints the current ball state out to offshore text file,
// returning a boolean value indicating print success
    //should this be a virtual method for Object?
bool Ball::printBallInfo(QString data) {
    bool didPrint = false;

    // establish connection with text file

    data = "ball," + QString(this->getX()) + "," + QString(this->getY()) + "," + QString(this->getRadius());

    if (/*connection succeeds*/ true  /*could we just return this?*/) {
        // gather object state and concatenate into string
        // print string of state to text file
        didPrint = true;
    }

    return didPrint;
}

// reads the current ball state from offshore text file,
// returning a boolean value indicaing read success;
// if read succeeds, stores ball state in instance variables


bool Ball::readBallInfo() {

    bool didRead = false;

    // establish connection with text file

    if (/*connection succeeds*/true) {
        // read string of state from text file
        // parse string and store object state in instance variables
        didRead = true;
    }

    return didRead;
}


//void Ball::Bounce(){}


void Ball::updatePosition(){
    this->setX(this->getX() + this->getSpeedX());
    this->setY(this->getY() + this->getSpeedY());
    this->collisionHandler();
    /*End hard coding*/
    this->setPoint();
}



void Ball::setPoint() {point = QPoint(this->getX() - this->getRadius(),this->getY()-this->getRadius());}

void Ball::updateSpeedX() {
    this->setSpeedX(this->getSpeedX()/abs(this->getSpeedX())*(int)sqrt(pow(this->getSpeed(),2)-pow(this->getSpeedY(),2)));
}

void Ball::updateSpeedY() {
    this->setSpeedY(this->getSpeedY()/abs(this->getSpeedY())*(int)sqrt(pow(this->getSpeed(),2)-pow(this->getSpeedX(),2)));
}

void Ball::invertSpeedX() {
    this->setSpeedX(this->getSpeedX()*-1);
}

void Ball::invertSpeedY() {
    this->setSpeedY(this->getSpeedY()*-1);
}

void Ball::collisionHandler() {
    if (World::getInstance()->getGamePlayer(0)->getHealth() <= 0 && this->getY() + this->getRadius() > World::getInstance()->getWorldSize()*14/15) {
        this->setY(World::getInstance()->getWorldSize()*14/15 - this->getRadius());
        this->invertSpeedY();
    }
    if (World::getInstance()->getGamePlayer(1)->getHealth() <= 0 && this->getX() + this->getRadius() > World::getInstance()->getWorldSize()*14/15) {
        this->setX(World::getInstance()->getWorldSize()*14/15 - this->getRadius());
        this->invertSpeedX();
    }
    if (World::getInstance()->getGamePlayer(2)->getHealth() <= 0 && this->getY() - this->getRadius() < World::getInstance()->getWorldSize()/15) {
        this->setY(World::getInstance()->getWorldSize()/15 + this->getRadius());
        this->invertSpeedY();
    }
    if (World::getInstance()->getGamePlayer(3)->getHealth() <= 0 && this->getX() - this->getRadius() < World::getInstance()->getWorldSize()/15) {
        this->setX(World::getInstance()->getWorldSize()/15 + this->getRadius());
        this->invertSpeedX();
    }
    foreach(Object *o, World::getInstance()->getObjects()) {
        double distance = o->getDistancetoPaddle(QPoint(this->getX(),this->getY()));
        if (distance != -1 && distance <= this->getRadius()) {
            onCollision(o);
        }
    }

    if (this->getX() - this->getRadius() < World::getInstance()->getWorldSize()/15) {
        World::getInstance()->getGamePlayer(3)->damage();
        if (playerId != 3 && playerId != -1)
            World::getInstance()->getGamePlayer(playerId)->point();
        World::getInstance()->setRoundFinished(true);
        this->reset();
    }
    if (this->getX() + this->getRadius() > World::getInstance()->getWorldSize()*14/15) {
        World::getInstance()->getGamePlayer(1)->damage();
        if (playerId != 1 && playerId != -1)
            World::getInstance()->getGamePlayer(playerId)->point();
        World::getInstance()->setRoundFinished(true);
        this->reset();
    }
    if (this->getY() - this->getRadius() < World::getInstance()->getWorldSize()/15) {
        World::getInstance()->getGamePlayer(2)->damage();
        if (playerId != 2 && playerId != -1)
            World::getInstance()->getGamePlayer(playerId)->point();
        World::getInstance()->setRoundFinished(true);
        this->reset();
    }
    if (this->getY() + this->getRadius() > World::getInstance()->getWorldSize()*14/15) {
        World::getInstance()->getGamePlayer(0)->damage();
        if (playerId != 0 && playerId != -1)
            World::getInstance()->getGamePlayer(playerId)->point();
        World::getInstance()->setRoundFinished(true);
        this->reset();
    }
}

void Ball::onCollision(Object *obj) {
    this->setPlayerId(obj->getPlayerId());
    cout << "Collision with player" << playerId << endl;
    switch (playerId % 2) {
        case 0:
            this->setY(obj->getLine().y1()-this->radius*abs(this->getSpeedY())/this->getSpeedY());
            this->incrementSpeedX(obj->getSpeed());
            this->invertSpeedY();
            break;
        case 1:
            this->setX(obj->getLine().x1()-this->radius*abs(this->getSpeedX())/this->getSpeedX());
            this->incrementSpeedY(obj->getSpeed());
            this->invertSpeedX();
            break;
        case -1:
        //bounce off of object
        Shapes* s = dynamic_cast<Shapes*>(obj);
        if(s != NULL)
         s->hitShape(this);
        qDebug() << "Hit the object" << endl;

            break;


    }
}

void Ball::incrementSpeedX(int vector) {
    if (vector == 0)
        return;
    this->setSpeedX(this->getSpeedX()+abs(1.25 * vector)/vector);
    qDebug() << "New Speed: " << speedX << ", " << speedY << "\n";
}

void Ball::incrementSpeedY(int vector) {
    if (vector == 0)
        return;
    this->setSpeedY(this->getSpeedY()+abs( 1.25 * vector)/vector);
    qDebug() << "New Speed: " << speedX << ", " << speedY << "\n";
}

void Ball::reset() {
    x = World::getInstance()->getWorldSize()/2;
    y = World::getInstance()->getWorldSize()/2;
    playerId = -1; //need to determine a playerId to use for NULL
    speedX = (pow(-1,rand()%2)) * ((rand() % (speed-2))+1);
    this->updateSpeedY();
    this->setPoint(); //point used to track the QLabel in the game
}

QString Ball::getNet(){
    QString str = "0/ball/"+ QString::number(this->getX()) + "/" + QString::number(this->getY()) + "/ ";
    return str;
}

