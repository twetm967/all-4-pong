#ifndef BALL_H
#define BALL_H

#include <QRect>
#include <QPoint>
#include <vector>
#include <QRect>



#include "Map.h"
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
        int x;
        int y;
        int speed;
        double direction;
        vector<QPoint> destinations;
      //  int last player to hit;

    public:
        Ball(int initspeed){            //takes (speed)
            speed = initspeed;
        }
        ~Ball();

        //getters
        int getX(){return x;}
        int getY(){return y;}
        int getSpeed(){return speed;}
        double getDirection(){return direction;}
    
    //setters
        void setX(int newX){x = newX;}
	void setY(int newY){y = newY;}
        void setSpeed(int newSpeed){speed = newSpeed;}
//	void setSpeedX(int newSpeedX) {speedX = newSpeedX;}
//--------------------------------------------------------------------------------------------//


        //Mathy Functions for PJ to make!!  
//This is Daniel Brainstorming do what you want. But maybe a direction class? 
// then you could have a function that returns a direction? Or would a direction
// just be a fraction? because y = mx+b? would that even work?

        void Direction();
        void Bounce();
        
};

#endif
