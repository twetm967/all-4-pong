#include "Object.h"
#include "Ball.h"
#include "World.h"
//#include "ui_game.h"
#include <QRect>
#include <QPoint>
#include <vector>
#include <cmath>
#include <QString>


///Constructors


Ball::Ball(int initSpeed):Object() {            //takes (speed)
    speed = initSpeed;
    x = 0;
    y = 0;
    radius = 15; //need to determine default radius
    playerId = -1; //need to determine a playerId to use for NULL
    speedX = (pow(-1,rand()%2)) * (rand() % (speed));
    speedY = (pow(-1,rand()%2)) * ((int)sqrt(pow(speed,2)-pow(speedX,2)));
    this->setPoint(); //point used to track the QLabel in the game
    World::getInstance()->add(this);
}

Ball::Ball(int initSpeed, int initX, int initY, int initPlayerId):Object() {
    speed = initSpeed;
    x = initX;
    y = initY;
    playerId = initPlayerId;
    radius = 15; //need to determine default radius; maybe include initRadius in Constructor
    speedX = (pow(-1,rand()%2)) * (rand() % (speed));
    speedY = (pow(-1,rand()%2)) * ((int)sqrt(pow(speed,2)-pow(speedX,2)));
    this->setPoint();
    World::getInstance()->add(this);
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


//uses old x,y compares them to new x,y
// creates direction; may not need
//double Ball::Direction(){return 0; /*return atan(this->getSpeedX()/- this->getspeedY()) % 360;*/} //need to test this function



void Ball::Bounce(){}

void Ball::onCollision(int objId){
    //determine where the object collision line is, if the object is moving, how fast and in what direction it is moving
    //determine new direction and speed and set ball position appropriately
}
void Ball::updatePosition(){
    this->setX(this->getX() + this->getSpeedX());
    this->setY(this->getY() + this->getSpeedY());
    //if there is a Collision call this->onCollision(objId)
    /*Right now just hard coding this in to get the ball moving and staying within bounds*/
    if (this->getX() - this->getRadius() < 0) {
        this->setX(0 + this->getRadius());
        this->invertSpeedX();
    }
    if (this->getX() + this->getRadius() > 450) {
        this->setX(450 - this->getRadius());
        this->invertSpeedX();
    }
    if (this->getY() - this->getRadius() < 0) {
        this->setY(0 + this->getRadius());
        this->invertSpeedY();
    }
    if (this->getY() + this->getRadius() > 450) {
        this->setY(450 - this->getRadius());
        this->invertSpeedY();
    }
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
