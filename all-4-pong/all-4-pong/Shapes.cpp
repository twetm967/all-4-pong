//Shapes.cpp
#include "Shapes.h"
#include "Object.h"


    // prints the current shape state out to offshore text file,
    // returning a boolean value indicating print success
    bool printShapeInfo() {
        bool didPrint = false;

        // establish connection with text file

        if (/*connection succeeds*/true) {
            // gather object state and concatenate into string
            // print string of state to text file
            didPrint = true;
        }

        return didPrint;
    }

    // reads the current shape state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores shape state in instance variables
    bool Shapes::readShapeInfo() {
        bool didRead = false;

        // establish connection with text file

        if (/*connection succeeds*/true) {
            // read string of state from text file
            // parse string and store object state in instance variables
            didRead = true;
        }

        return didRead;
    }

   void Shapes::updatePosition(){


    }

    Shapes::Shapes():Object() {
          //PlayerId = -1;
          int initx = rand() % World::getInstance()->getWorldSize();
          int inity = rand() % World::getInstance()->getWorldSize();
          //bounds checking
          //off the edges
          if(initx < 100) initx += 100;
          if(inity < 100) inity  += 100;
          if(initx  > World::getInstance()->getWorldSize() - 100) initx  -= 100;
          if(inity  > World::getInstance()->getWorldSize() - 100) inity  -= 100;
          //out of the middle
          if(abs(initx - 205) < 100 && abs(inity - 205) < 100){
              initx += 70; inity+= 70;
          }
     rect.setX(initx);
     rect.setY(inity);
     rect.setHeight((rand() % 30 + 25));
     rect.setWidth((rand() % 30 + 25));
          point.setX(initx);
          point.setY(inity);

        //   World::getInstance()->add(this);

    }

    Shapes::~Shapes(){
     //~Object();
    delete boost;
    }

    double Shapes::getDistancetoPaddle(QPoint pointIn){
        if (pointIn.x() >= rect.topLeft().x() && pointIn.x() <= rect.topRight().x() && pointIn.y() <= rect.topLeft().y()){
        //hit the top of the box
             PlayerId = 2;

             return (double)1+ min(abs(pointIn.y() - rect.topLeft().y()), abs(pointIn.y() - rect.topRight().y()));
               }else{
         //hit the bottom
            if(pointIn.x() >= rect.bottomLeft().x() && pointIn.x() <= rect.bottomRight().x() && pointIn.y() >= rect.bottomLeft().y()){
            PlayerId = 0;
            return (double)1 + min(abs(pointIn.y() - rect.bottomLeft().y()),abs(pointIn.y() - rect.bottomRight().y()));
               }else{
        //hit the left side
            if (pointIn.y() >= rect.topLeft().y() && pointIn.y() <= rect.bottomLeft().y() && pointIn.x() <= rect.topLeft().x()){
            PlayerId = 3;
            return (double)1 + min(abs(pointIn.x() - rect.topLeft().x()), abs(pointIn.x() - rect.topRight().x()));
               }else{
        //hit the right side
                if(pointIn.y() >= rect.topRight().y() && pointIn.y() <= rect.bottomRight().y() && pointIn.x() >= rect.bottomRight().x()){
            PlayerId = 1;
            return (double) 1 + min(abs(pointIn.x() - rect.topRight().x()), abs(pointIn.x() - rect.bottomLeft().x()));
                   }
                }
            }
        }
        PlayerId = -1;
        return -1;
        //return min(sqrt(pow(pointIn.x()-line.x1(),2)+pow(pointIn.y()-line.y1(),2)),sqrt(pow(pointIn.x()-line.x2(),2)+pow(pointIn.y()-line.y2(),2)));

    }

    void Shapes::hitShape(Ball* b){
        int pos;
        switch(PlayerId){
        case 0: //bottom
            pos = rect.bottomLeft().y();
            b->setY(pos + b->getRadius());//*abs(b->getSpeedY())/b->getSpeedY());
            b->incrementSpeedX(.5);
            b->invertSpeedY();
            break;
        case 1: //right
            pos = rect.bottomRight().x();
            b->setX(pos + b->getRadius());//*abs(b->getSpeedX())/b->getSpeedX());
            b->incrementSpeedY(.5);
            b->invertSpeedX();
            break;
        case 2:// top
            pos = rect.topLeft().y();
            b->setY(pos - b->getRadius());//*abs(b->getSpeedY())/b->getSpeedY());
            b->incrementSpeedX(.5);
            b->invertSpeedY();
            break;
        case 3:// left
            pos = rect.topLeft().x();
            b->setX(pos - b->getRadius());//*abs(b->getSpeedX())/b->getSpeedX());
            b->incrementSpeedY(.5);
            b->invertSpeedX();
            break;
}

    }
