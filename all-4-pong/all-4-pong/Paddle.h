#ifndef PADDLE_H
#define PADDLE_H


#include <QObject>
#include <vector>
#include <QRect>
#include <QMouseEvent>
#include <QDebug>

#include "Ball.h"
#include "Objects.h"

//class Objects;
//class Ball;


class Paddle : public Objects/*, public QRect*/ //because the class inherits
        //from Objects, it also inherits from QRect
{
    int playerId;
    QPoint spot;

public:

    //takes player index;
  Paddle():Objects(){}
  void setUp();

    //****Getters and setters****/
  /*  int getPosition(){return position;}
    int getSideId(){return sideId;}
    int getLength(){return paddleLength;}
   */// int getPlayerId(){return playerId;}


    void setPlayerId(int inID){playerId = inID;
                               setUp();
                              }
    //void  setPosition(int inPos){position = inPos;}
    //void  setLength(int inLength){ paddleLength = inLength;}
    //*******************************


    void Move();

   // QPoint getSpot(){return spot;}

    void setMouse(QPoint);
    bool getHit(Ball*);

    /*int getX(){
        if(spot->x()>= 0 && spot->x() <= 350)
        return spot->x();
        if(spot->x() < 0)
            return 0;
        if(spot->x() > 350)
            return 350;

    }

    int getY(){
        if(spot.y() >= 0 && spot.y() <=350)
        return spot.y();

    }
*/
    void setX(int in){
        if(in >= 0 && in <= 435)
        point.setX(in);
        else{
        if(in < 0)
            point.setX(0);
        if(in > 435)
           point.setX(435);
       // spot.setX(in);
}
    }

    void setY(int y){
        if(y >= 0 && y <= 350)
        point.setY(y);
        else{
        if(y < 0)
            point.setY(0);
        if(y > 350)
            point.setY((350));
        }
        // spot.setY(y);
    }

   // void mousePressEvent(QMouseEvent*);

//QMouseEvent*
    void mouseMoveEvent(QMouseEvent*);

    void updatePosition();



    
    // prints the current paddle state out to offshore text file,
    // returning a boolean value indicating print success
    bool printPaddleInfo();

    // reads the current paddle state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores paddle state in instance variables
    bool readPaddleInfo();

    //
    
};

#endif // PADDLE_H
