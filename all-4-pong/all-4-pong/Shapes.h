#ifndef SHAPES_H
#define SHAPES_H

#include <vector>

#include "Object.h"

class PowerUp;

class Shapes: public Object
{
    private:
        int x;
        int y;
        PowerUp* boost;                                     //would need a powerup class and associated inheritors
    public:
        Shapes();
//        ~Shapes();

        //*********Getters and setters****************
        int getX(){return x;}
        int getY(){return y;}
        PowerUp* getPowerUp(){return boost;}
        QString getType() {return "shape";}

        void setX(int inX){x = inX;}
        void setY(int inY){y = inY;}
        void setPowerUp(PowerUp *inBoost){boost = inBoost;}
        //********************************************



        // prints the current shape state out to offshore text file,
        // returning a boolean value indicating print success
        bool printShapeInfo();

        // reads the current shape state from offshore text file,
        // returning a boolean value indicaing read success;
        // if read succeeds, stores shape state in instance variables
        bool readShapeInfo();

};

#endif
