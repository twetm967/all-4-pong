#include "Ball.h"
#include "Objects.h"
#include <vector>


Objects::Objects(bool isHit, QPoint isWandH, QPoint isPoint){
    hit = isHit;
    WandH = isWandH;
    point = isPoint;

    this->setRect(point.x(), point.y(),WandH.x(), WandH.y());
}





