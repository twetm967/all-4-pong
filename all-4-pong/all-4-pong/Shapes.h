#ifndef SHAPES_H
#define SHAPES_H

#include <vector>
#include "World.h"
#include "Object.h"

class PowerUp;

class Shapes: public Object
{
    private:
        int x, x2;
        int y, y2;
        int PlayerId;
        QRect rect;
        PowerUp* boost;                                     //would need a powerup class and associated inheritors
    public:
        Shapes();
        ~Shapes();

        //*********Getters and setters****************
        int getPlayerId(){return -1;}
        int getSide(){
            return PlayerId;
        }

        int getX(){return x;}
        int getY(){return y;}
        PowerUp* getPowerUp(){return boost;}
        QString getType() {return "shape";}
        QRect getRect(){return rect;}
        void hitShape(Ball*);
        void setX(int inX){x = inX;}
        void setY(int inY){y = inY;}
        void setPowerUp(PowerUp *inBoost){boost = inBoost;}
        //********************************************
        void updatePosition();
        double getDistancetoPaddle(QPoint pointIn);

        // prints the current shape state out to offshore text file,
        // returning a boolean value indicating print success
        bool printShapeInfo();

        // reads the current shape state from offshore text file,
        // returning a boolean value indicaing read success;
        // if read succeeds, stores shape state in instance variables
        bool readShapeInfo();

};

#endif
