#include "Objects.h"
#include "Ball.h"
//#include "ui_game.h"
#include <QRect>
#include <QPoint>
#include <vector>
#include <cmath>
#include <QString>





Ball::Ball(int initSpeed) {            //takes (speed)
    speed = initSpeed;
    x = 0;
    y = 0;
    radius = 1; //need to determine default radius
    playerId = -1; //need to determine a playerId to use for NULL
    point = QPoint(x - radius, y - radius); //point used to track the QLabel in the game
    //set rest of uninitialized variables (determine direction and therby speedX and speedY)
}

// prints the current ball state out to offshore text file,
// returning a boolean value indicating print success
    //should this be a virtual method for objects?
bool Ball::printBallInfo(QString data) {
    bool didPrint = false;

    // establish connection with text file

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
// creates direction
double Ball::Direction(){return 0; /*return atan(this->getSpeedX()/- this->getspeedY()) % 360;*/} //need to test this function



void Ball::Bounce(){}

void Ball::onCollision(int objId){
    //determine where the object collision line is, if the object is moving, how fast and in what direction it is moving
    //determine new direction and speed and set ball position appropriately
}
void Ball::Move(){
    this->setX(this->getX()+this->getSpeedX());
    this->setY(this->getY()+this->getSpeedY());
    //if there is a Collision call this->onCollision(objId)
    this->setPoint();
}

Ball::Ball(int initSpeed, int initX, int initY, int initPlayerId) {
    speed = initSpeed;
    x = initX;
    y = initY;
    playerId = initPlayerId;
    radius = 5; //need to determine default radius;
    point = QPoint(x - radius, y - radius); //need to make this a method;
}

        void Ball::setPoint() {point = QPoint(this->getX() - this->getRadius(),this->getY()-this->getRadius());}
