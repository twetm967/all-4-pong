#ifndef PADDLE_H
#define PADDLE_H


#include <QObject>
#include <vector>
#include <QRect>
#include <QMouseEvent>
#include <QDebug>
#include <QLine>

//#include "Ball.h"
#include "Object.h"
//#include "Player.h"
#include "World.h"

//class Object;
class Ball;
class Player;


class Paddle : public Object
{
    int playerId;
    Player* Hand;
    int length;
    QLine line;
    int speed;
    int worldSize;
    int width;

public:

    //takes player index;
  Paddle():Object(){}
  void setUp();

  int getSpeed(){
      return speed;
  }

    void setPlayerId(int inID) {
        playerId = inID;
        Hand = World::getInstance()->getGamePlayers().at(playerId);
        length = 100;
        this->setUp();
        width = 15;
    }
    //*******************************



//    QRect getRectangle() {return rectangle;}
   // QPoint getSpot(){return spot;}

    void setMouse(QPoint);
    bool getHit();

    void setX(int newX);
    void setY(int newY);
    QString getType() {return "paddle";}
    void setLine();
    QLine getLine() {return line;}
    void setLength(int newLength) {length = newLength;}
    void setWidth(int newWidth) {width = newWidth;}

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
