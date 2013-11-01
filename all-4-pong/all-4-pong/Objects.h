#ifndef OBJECTS_H
#define OBJECTS_H

#include <QPoint>
#include <QRect>
#include <vector>




//This class will be the parent of all classes dealing with objects that can be hit
class Object: public QRect {



protected:
    //instance variables that are shared by all children of objects


  //QRect Rectangle;
    QPoint point;

    static int nextObjId;
    int objId;



public:

    Object(QPoint);

   //Object(int,int,int,int);

  // Object(int);

    Object();

    ~Object();
    //Getters and setters------------------------------

    void setQPoint(QPoint inPoint){point = inPoint;}
    virtual void setPlayerId(int) { }

    bool getHit();
    QPoint getQPoint(){return point;}



    //------------------------------------------------------

    //virtual methods
   void virtual updatePosition();
   bool virtual Hit(){return true;}
   bool virtual getBound();



};

#endif // OBJECTS_H
