

#include <vector>
#include <QPoint>
#include "World.h"

#include "Objects.h"
using namespace std;
//class Ball;
//#include "Ball.h"

int Object::nextObjId = 0;

Object::Object(QPoint isPoint){
   // hit = isHit;
   // WandH = isWandH;
    point = isPoint;
    this->setRect(point.x(), point.y(),point.x() + 10, point.y() + 10);
    objId = ++nextObjId;
    World::getInstance()->add(this);
}


Object::Object(){
objId = ++nextObjId;
World::getInstance()->add(this);
}

//inline
    Object::~Object() { }

bool Object::getHit(){}

void Object::updatePosition(){}
bool Object::getBound(){}

