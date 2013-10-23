#ifndef OBJECTS_H
#define OBJECTS_H

#include <QPoint>
#include <QRect>

#include <vector>




//This class will be the parent of all classes dealing with objects that can be hit
class Objects: public QRect {
private:
    //instance variables that are shared by all children of objects
    bool hit;
    bool movable;
    QPoint WandH;
  //  QRect Rectangle;
    QPoint point;

public:

    Objects();
    virtual ~Objects() = 0;
    //Getters and setters------------------------------
    void setHit(bool inHit){hit = inHit;}
    void setQPoint(QPoint inPoint){point = inPoint;}
    void setmovable(bool inmovable){movable = inmovable;}

    //bool getHit(Ball*); we need to move this to another class
    //double getArea(){return area;}
    QPoint getQPoint(){return point;}
    bool getmovable(){return movable;}
    //------------------------------------------------------

    //virtual methods
   void virtual Move();
   bool virtual Hit();
   bool virtual getBound();



};


#endif // OBJECTS_H
