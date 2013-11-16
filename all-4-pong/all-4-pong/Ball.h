#ifndef BALL_H
#define BALL_H

#include <QRect>
#include <QPoint>
#include <vector>
#include <QRect>
#include <QString>
/*
#include "paddle.h"
#include "Player.h"
//#include "Shapes.h" //when I add this, things break.
#include "World.h"
*/

#include "Object.h"

#include <iostream>
#include <fstream>

using namespace std;

class World;

//class paddle;

class Player;
class Shapes;

//class Ball: public Object
class Ball : public Object
{
//<<<<<<< HEAD
    private:
        //needs to inherit
        int x, y; //where the ball is centered
        int speedX, speedY; //if we know the new and old coordinates, we can determin speed, direction, and point of contact
        int speed;
        int radius; //radius of the ball
        int minSpeed;  //Minimum ball speed in x or y directions
        int maxSpeed;  //Maximum ball speed in x or y directions

    public:
        Ball(int initSpeed);
        Ball(){}
        Ball(int initSpeed, int initX, int initY, int initPlayerId);

        //getters
        int getX(){return x;} //returns x from center of ball
        int getY(){return y;} //returns y from center of ball
        int getRadius(){return radius;}
        int getMinSpeed(){return minSpeed;}
        int getMaxSpeed(){return maxSpeed;}
        int getSpeedX(){return speedX;}
        int getSpeedY(){return speedY;}
        int getSpeed(){return speed;}
        void printInfo(ofstream* stream);
//        double getDirection(){return 0;} //need to create logic to provide direction based on speedX and speedY
        int getPlayerId(){return playerId;}
        QString getType() {return "ball";}


        //setters -- need additional logic to fully implement
        void getInfo(ofstream *);
        void setX(int newX){x = newX;}
        void setY(int newY){y = newY;}
        void setSpeed(int newSpeed){speed = newSpeed;}
        void setSpeedX(int newSpeedX);
        void setSpeedY(int newSpeedY);
        void incrementSpeedX(int vector);
        void incrementSpeedY(int vector);
        void setPlayerId(int newId) {playerId = newId;}
        void setPoint();
//--------------------------------------------------------------------------------------------//
        void updatePosition();

        void updateSpeedX();
        void updateSpeedY();
        void invertSpeedX();
        void invertSpeedY();
        void reset();

        // prints the current ball state out to offshore text file,
        // returning a boolean value indicating print success
        bool printBallInfo();

        // reads the current ball state from offshore text file,
        // returning a boolean value indicaing read success;
        // if read succeeds, stores ball state in instance variables
        bool readBallInfo();
        void collisionHandler();

        double Direction();  //provides direction (angle) the ball is traveling
        /*void Bounce();*/ //I don't know who created this, but I think it may be the same as the onCollision method I have already created
        void onCollision(Object *obj); //this method will determine logic upon collision
        QString getNet();
/*=======
private:
    //needs to inherit
    int x, y; //where the ball is centered
    int speedX, speedY; //if we know the new and old coordinates, we can determin speed, direction, and point of contact
    int speed;
    int radius; //radius of the ball
    int minSpeed;  //Minimum ball speed in x or y directions
    int maxSpeed;  //Maximum ball speed in x or y directions

public:
    Ball(int initSpeed);
   // Ball(){}
    Ball(int initSpeed, int initX, int initY, int initPlayerId);*/


    //save load
    void getInfo(vector<string> *);
    void setInfo(ofstream *);
    //getters
    /*int getX(){return x;} //returns x from center of ball
    int getY(){return y;} //returns y from center of ball
    int getRadius(){return radius;}
    int getMinSpeed(){return minSpeed;}
    int getMaxSpeed(){return maxSpeed;}
    int getSpeedX(){return speedX;}
    int getSpeedY(){return speedY;}
    int getSpeed(){return speed;}
    //        double getDirection(){return 0;} //need to create logic to provide direction based on speedX and speedY
    int getPlayerId(){return playerId;}
    QString getType() {return "ball";}*/
    //QString getNet(){
       // QString str = "0/ball/"+ QString::number(this->getX()) +
       //                     "/" + QString::number(this->getY()) + "/ ";
       // return str;
    //}
    /*//setters -- need additional logic to fully implement
    void setX(int newX){x = newX;}
    void setY(int newY){y = newY;}
    void setSpeed(int newSpeed){speed = newSpeed;}
    void setSpeedX(int newSpeedX);
    void setSpeedY(int newSpeedY);
    void incrementSpeedX(int vector);
    void incrementSpeedY(int vector);
    void setPlayerId(int newId) {playerId = newId;}
    void setPoint();
    //--------------------------------------------------------------------------------------------//
    void updatePosition();

    void updateSpeedX();
    void updateSpeedY();
    void invertSpeedX();
    void invertSpeedY();
    void reset();

    // prints the current ball state out to offshore text file,
    // returning a boolean value indicating print success
    bool printBallInfo();

    // reads the current ball state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores ball state in instance variables
    bool readBallInfo();
    void collisionHandler();

    double Direction();  //provides direction (angle) the ball is traveling
    /*void Bounce();*/ //I don't know who created this, but I think it may be the same as the onCollision method I have already created
    //void onCollision(Object *obj); //this method will determine logic upon collision

//>>>>>>> 35672ae33fb56f4f5c6cad1d4c85bfdcfc85bf6

};

#endif
