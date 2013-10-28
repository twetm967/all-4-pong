

#include <vector>
#include <QPoint>

#include "Objects.h"
using namespace std;
//class Ball;
//#include "Ball.h"

Objects::Objects(QPoint isPoint){
   // hit = isHit;
   // WandH = isWandH;
    point = isPoint;

    this->setRect(point.x(), point.y(),point.x() + 10, point.y() + 10);
}


Objects::Objects(){

}



bool Objects::getHit(){

}

void Objects::Move(){}
bool Objects::getBound(){}

