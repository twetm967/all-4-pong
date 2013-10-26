
#include "Objects.h"
#include <vector>

//class Ball;
//#include "Ball.h"
Objects::Objects(bool isHit, QPoint isWandH, QPoint isPoint){
   // hit = isHit;
   // WandH = isWandH;
    point = isPoint;

    this->setRect(point.x(), point.y(),point.x() + 10, point.y() + 10);
}





