#ifndef SHAPES_H
#define SHAPES_H

#include <vector>
#include "World.h"
#include "Object.h"
#include "powerup.h"
#include <iostream>
#include <fstream>


class Shapes: public Object
{
private:
    int x;
    int y;
    int PlayerId;
    bool net;
    QRect rect;
    PowerUp* boost;                                     //would need a powerup class and associated inheritors
public:
    Shapes(bool flip);
    ~Shapes();
    void setInfo(ofstream *);
    void getInfo(vector<string>*);
    //*********Getters and setters****************
    int getPlayerId(){return -1;}
    int getSide(){return PlayerId;}
    bool getBool() {return net;}
    void setBool(bool flip) {net = flip;}
    int getX(){return x;}
    int getY(){return y;}
    PowerUp* getPowerUp(){return boost;}
    QString getType() {return "shape";}
    QRect getRect(){return rect;}
    QString getNet();
    void setX(int inX){x = inX;}
    void setY(int inY){y = inY;}
    void setPowerUp(PowerUp *inBoost){boost = inBoost;}
    //********************************************
    void updatePosition();
    double getDistancetoPaddle(QPoint pointIn);
    bool hitLeftSide(Ball*);
    bool hitRightSide(Ball*);
    bool hitTopSide(Ball*);
    bool hitBottomSide(Ball*);
    int hitShape(Ball*);

    // prints the current shape state out to offshore text file,
    // returning a boolean value indicating print success
    bool printShapeInfo();

    // reads the current shape state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores shape state in instance variables
    bool readShapeInfo();

};

#endif
