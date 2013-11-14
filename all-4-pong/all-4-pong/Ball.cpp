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
///Constructors


Ball::Ball(int initSpeed):Object() {            //takes (speed)
    speed = initSpeed;
    x = World::getInstance()->getWorldSize()/2;
    y = World::getInstance()->getWorldSize()/2;
    radius = World::getInstance()->getWorldSize()/30;
    minSpeed = max(initSpeed/5,1);
    maxSpeed = initSpeed*10;
    playerId = -1; //need to determine a playerId to use for NULL
    speedX = (pow(-1,rand()%2)) * ((rand() % (speed-2))+1);;
    this->updateSpeedY();
    this->setPoint(); //point used to track the QLabel in the game
    World::getInstance()->addBall(this);
}

Ball::Ball(int initSpeed, int initX, int initY, int initPlayerId):Object() {
    speed = initSpeed;
    x = initX;
    y = initY;
    playerId = initPlayerId;
    radius = World::getInstance()->getWorldSize()/30;
    minSpeed = max(initSpeed/5,1);
    maxSpeed = initSpeed*10;
    speedX = (pow(-1,rand()%2)) * ((rand() % (speed-2))+1);;
    this->updateSpeedY();
    this->setPoint();
    World::getInstance()->addBall(this);
}




///Methods


/*
// prints the current ball state out to offshore text file,
// returning a boolean value indicating print success
    //should this be a virtual method for Object?
bool Ball::printBallInfo() {
    bool didPrint = false;

    ofstream officialGameState;
    officialGameState.open(("official-all-4-pong-state.txt")); // establish connection with text file
    QString data = this->getNet();


    //data += //everything else i need right now it has 0/ball/x/y/;
    //data = "ball," + QString(this->getX()) + "," + QString(this->getY()) + "," + QString(this->getRadius());

    if (officialGameState.is_open()) {
        // gather object state and concatenate into string
        data = "/" + QString::number(playerId) + "/" + QString::number(x) + "/"+ QString::number(y)+ "/" + QString::number(this->getSpeedX()) + "/" + QString::number(this->getSpeedY())+ "/" + QString::number(this->getSpeed()) +  "/" + QString::number(this->getRadius()) + "/" + QString::number(this->getMinSpeed()) << "/" + QString::number(this->getMaxSpeed()); // print string of state to text file

        string blah = data.toStdString();
        officialGameState << blah << "\n";
        officialGameState.close();

        didPrint = true;
    }

    return didPrint;
}
*/
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


void Ball::setSpeedX(int newSpeedX) {
    if (abs(newSpeedX) >= minSpeed && abs(newSpeedX) <= maxSpeed) {
        speedX = newSpeedX;
        return;
    }
    if (newSpeedX < minSpeed) {
        speedX = abs(this->getSpeedX())/this->getSpeedX() * minSpeed;
        return;
    }
    speedX = abs(this->getSpeedX())/this->getSpeedX() * maxSpeed;
}

void Ball::setSpeedY(int newSpeedY) {
    if (abs(newSpeedY) >= minSpeed && abs(newSpeedY) <= maxSpeed) {
        speedY = newSpeedY;
        return;
    }
    if (abs(newSpeedY) < minSpeed) {
        speedY = abs(this->getSpeedY())/this->getSpeedY() * minSpeed;
        return;
    }
    speedX = abs(this->getSpeedY())/this->getSpeedY() * maxSpeed;
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
            this->incrementSpeedY(5 * abs(this->getSpeedY())/this->getSpeedY());
            break;
        case 1:
            this->setX(obj->getLine().x1()-this->radius*abs(this->getSpeedX())/this->getSpeedX());
            this->incrementSpeedY(obj->getSpeed());
            this->invertSpeedX();
            this->incrementSpeedX(5 * abs(this->getSpeedX())/this->getSpeedX());
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
    this->setSpeedX(this->getSpeedX() + (pow(vector,2)/vector + 5)/10);
    qDebug() << "New Speed: " << speedX << ", " << speedY << "\n";
}

void Ball::incrementSpeedY(int vector) {
    if (vector == 0)
        return;
    this->setSpeedY(this->getSpeedY() + (pow(vector,2)/vector + 5)/10);
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

// /ball/idoflasthit/x/y/speedx/speedy/raius/
void Ball::printInfo(ofstream* stream){

    //   "playerId/x/y/xspeed/yspeed/"
  //  if(stream.is_open()){
    *stream << "/ball/" << playerId << "/" << x << "/" << y <<"/" << speedX <<"/" << speedY << "/"
            <<radius << "/" << endl;
    //    }else{return false;}
    }




