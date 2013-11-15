#ifndef PADDLE_H
#define PADDLE_H


#include <QObject>
#include <vector>
#include <QRect>
#include <QMouseEvent>
#include <QDebug>
#include <QLine>
#include <QString>
#include <iostream>
#include <fstream>

#include "World.h"

#include "Object.h"


class Ball;
class Player;

class Paddle : public Object
{
    Player* Hand;
    int length, width;
    QLine line;

    int speed;

public:

    //takes player index;
  Paddle():Object(){
      int worldSize = World::getInstance()->getWorldSize();
      length = (worldSize / 4.5);
      width = (worldSize / 30);
  }
  void setUp();

  int getSpeed(){
      return speed;
  }

    void setPlayerId(int inID) {
        playerId = inID;
        Hand = World::getInstance()->getGamePlayers().at(playerId);
        this->setUp();
    }
    //*******************************



//    QRect getRectangle() {return rectangle;}
   // QPoint getSpot(){return spot;}

    void setMouse(QPoint);
    bool getHit();

    //save load
    void getInfo(vector<string> *);
    void setInfo(ofstream *);
    QString getUserName();
    void printInfo(ofstream*);
    void setX(int newX);
    void setY(int newY);
    QString getType() {return "paddle";}
    void setUpLine();
    QLine getLine() {return line;}
    void setLength(int newLength) {length = newLength;}
    void setWidth(int newWidth) {width = newWidth;}
    void moveLine(int distance);
    double getDistancetoPaddle(QPoint point);
    void eliminate();

    void updatePosition();

    QString getNet();

    
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
