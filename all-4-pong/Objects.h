#ifndef OBJECTS_H
#define OBJECTS_H

#include <QPoint>
#include <QRect>
#include <vector>




//This class will be the parent of all classes dealing with objects that can be hit
class Objects: public QRect {
protected:
    //instance variables that are shared by all children of objects


  //QRect Rectangle;
    QPoint point;
    static int nextObjId;
    int objId;


public:

     Objects(bool,QPoint,QPoint);

     Objects(int,int,int,int);

     Objects(int);

     Objects();

    virtual ~Objects() = 0;
    //Getters and setters------------------------------

    void setQPoint(QPoint inPoint){point = inPoint;}

    bool getHit();
    QPoint getQPoint(){return point;}

    //------------------------------------------------------

    //virtual methods
   void virtual Move();
   bool virtual Hit();
   bool virtual getBound();



};


#endif // OBJECTS_H
