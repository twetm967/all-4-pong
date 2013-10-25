#ifndef OBJECTS_H
#define OBJECTS_H

#include <QPoint>
#include <QRect>
#include <vector>




//This class will be the parent of all classes dealing with objects that can be hit
class Objects: public QRect {
private:
    //instance variables that are shared by all children of objects


  //QRect Rectangle;
    QPoint point;
    static int nextObjId;
    int objId;


public:

     Objects(bool,bool,QPoint,QPoint);

     Objects(int,int,int,int);

    virtual ~Objects() = 0;
    //Getters and setters------------------------------
    void setHit(bool inHit){hit = inHit;}
    void setQPoint(QPoint inPoint){point = inPoint;}
    void setmovable(bool inmovable){movable = inmovable;}

    bool getHit();
    double getArea(){return area;}
    QPoint getQPoint(){return point;}
    bool getmovable(){return movable;}
    //------------------------------------------------------

    //virtual methods
   void virtual Move();
   bool virtual Hit();
   bool virtual getBound();



};


#endif // OBJECTS_H
