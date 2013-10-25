#include "Ball.h"
#include "Objects.h"
#include <vector>


Objects::Objects(bool isHit, bool isMovable, QPoint isWandH, QPoint isPoint){
    hit = isHit;
    movable = isMovable;
    WandH = isWandH;
    point = isPoint;

    this->setRect(point.x(), point.y(),WandH.x(), WandH.y());
}





