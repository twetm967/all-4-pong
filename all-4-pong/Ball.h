#ifndef BALL_H
#define BALL_H

#include <QRect>
#include <QPoint>
#include <vector>
#include <QRect>

#include "paddle.h"
#include "Player.h"
//#include "Shapes.h" //when I add this, things break.
#include "World.h"
#include "Objects.h"

using namespace std;

//class Ball: public Objects
class Ball: public Objects
{
    private:
        //needs to inherit
        int x, y; //where the ball is centered
        int speedX, speedY; //if we know the new and old coordinates, we can determin speed, direction, and point of contact
        int speed;
        vector<QPoint> destinations;  //vector of next point on each side the ball will hit
        int playerId;  // Id of last player to hit the ball
        int radius; //radius of the ball

    public:
        //need to move to .cpp file
        Ball(int initSpeed) {            //takes (speed)
            speed = initSpeed;
            x = 0;
            y = 0;
            radius = 1; //need to determine default radius
            playerId = -1; //need to determine a playerId to use for NULL
            point = QPoint(x - radius, y - radius); //point used to track the QLabel in the game
            movable = true;
            //set rest of uninitialized variables (determine direction)
        }
        ~Ball();

        Ball(int initSpeed, int initX, int initY, int initPlayerId) {
            speed = initSpeed;
            x = initX;
            y = initY;
            playerId = initPlayerId;
            radius = 1; //need to determine default radius;
            point = QPoint(x - radius, y - radius); //need to make this a method;
            movable = true;
        }

        //getters
        vector<QPoint> getDirections(){return destinations;}
        int getX(){return x;}
        int getY(){return y;}
        int getSpeed(){return speed;}
        double getDirection(){return 0;} //need to create logic to provide direction based on speedX and speedY
    
        //setters -- need additional logic to fully implement
        void setX(int newX){x = newX;}
        void setY(int newY){y = newY;}
        void setSpeed(int newSpeed){speed = newSpeed;}
        void setSpeedX(int newSpeedX) {speedX = newSpeedX;}
        void setSpeedY(int newSpeedY) {speedY = newSpeedY;}
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

        void Direction();
        void Bounce();
        void onCollision(int objId); //this method will determine logic upon collision
        
};

#endif
