

#include <vector>
#include <QPoint>
#include "World.h"

#include "Objects.h"
using namespace std;
//class Ball;
//#include "Ball.h"

int Objects::nextObjId = 0;

Objects::Objects(QPoint isPoint){
   // hit = isHit;
   // WandH = isWandH;
    point = isPoint;
    this->setRect(point.x(), point.y(),point.x() + 10, point.y() + 10);
    objId = ++nextObjId;
    World::getInstance()->add(this);
}


Objects::Objects(){
objId = ++nextObjId;
World::getInstance()->add(this);
}

//inline Objects::~Objects() { }

bool Objects::getHit(){

}

void Objects::Move(){}
bool Objects::getBound(){}

