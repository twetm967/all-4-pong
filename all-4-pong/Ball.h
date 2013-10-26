#ifndef BALL_H
#define BALL_H

#include <QRect>
#include <QPoint>
#include <vector>
#include <QRect>
/*
#include "paddle.h"
#include "Player.h"
//#include "Shapes.h" //when I add this, things break.
#include "World.h"
#include "Objects.h"
*/
using namespace std;

class World;

class paddle;

class Player;
class Shapes;
class Objects;

//class Ball: public Objects
class Ball: public Objects
{
    private:
        //needs to inherit
        int x, y; //where the ball is centered
        int speedX, speedY; //if we know the new and old coordinates, we can determin speed, direction, and point of contact
        int speed;
        int playerId;  // Id of last player to hit the ball
        int radius; //radius of the ball

    public:
        //need to move to .cpp file
        Ball(int initSpeed);
        ~Ball();

        Ball(int initSpeed, int initX, int initY, int initPlayerId) {
            speed = initSpeed;
            x = initX;
            y = initY;
            playerId = initPlayerId;
            radius = 5; //need to determine default radius;
            point = QPoint(x - radius, y - radius); //need to make this a method;
            movable = true;
        }

        //getters
        vector<QPoint> getDirections(){return destinations;}
        int getX(){return x;} //returns x from center of ball
        int getY(){return y;} //returns y from center of ball
        int getRadius(){return radius;}
        int getSpeedX(){return speedX;}
        int getSpeedY(){return speedY;}
        int getSpeed(){return speed;}
        double getDirection(){return 0;} //need to create logic to provide direction based on speedX and speedY
        int getPlayerId(){return playerId;}
    
        //setters -- need additional logic to fully implement
        void setX(int newX){x = newX;}
        void setY(int newY){y = newY;}
        void setSpeed(int newSpeed){speed = newSpeed;}
        void setSpeedX(int newSpeedX) {speedX = newSpeedX;}
        void setSpeedY(int newSpeedY) {speedY = newSpeedY;}
        void setPlayerId(int newId) {playerId = newId;}
        void setPoint() {point = QPoint(this->getX() - this->getRadius(),this->getY()-this->getRadius());}
//--------------------------------------------------------------------------------------------//


        //Mathy Functions for PJ to make!!  
//This is Daniel Brainstorming do what you want. But maybe a direction class? 
// then you could have a function that returns a direction? Or would a direction
// just be a fraction? because y = mx+b? would that even work?


        // prints the current ball state out to offshore text file,
        // returning a boolean value indicating print success
        bool printBallInfo();

        // reads the current ball state from offshore text file,
        // returning a boolean value indicaing read success;
        // if read succeeds, stores ball state in instance variables
        bool readBallInfo();

        double Direction();  //provides direction (angle) the ball is traveling
        void Bounce(); //I don't know who created this, but I think it may be the same as the onCollision method I have already created
        void onCollision(int objId); //this method will determine logic upon collision
        
};

#endif
