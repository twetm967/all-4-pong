#ifndef OBJECTS_H
#define OBJECTS_H

#include <QPoint>
#include <vector>
#include <QLine>
#include <QString>




//This class will be the parent of all classes dealing with objects that can be hit
class Object {



protected:
    //instance variables that are shared by all children of objects


  //QRect Rectangle;
    QPoint point;

    static int nextObjId;
    int objId;
    int playerId;



public:

    Object(QPoint);

   //Object(int,int,int,int);

  // Object(int);

    Object();

    ~Object();
    //Getters and setters------------------------------

    void setQPoint(QPoint inPoint){point = inPoint;}


    bool getHit();
    QPoint getQPoint(){return point;}



    //------------------------------------------------------

    //virtual methods
   void virtual updatePosition();
   bool virtual Hit(){return true;}
   bool virtual getBound();
   double virtual getDistancetoPaddle(QPoint point){return -1;}
   int virtual getPlayerId() {return playerId;}
   virtual void setPlayerId(int) {}
   virtual QString getType() {return "";}
   virtual QLine getLine() {return QLine();}
   virtual int getSpeed() {return 0;}
   virtual void extend() {}



};

#endif // OBJECTS_H
