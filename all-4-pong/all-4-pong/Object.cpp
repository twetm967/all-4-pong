

#include <vector>
#include <QPoint>
#include "World.h"

#include "Object.h"
using namespace std;
//class Ball;
//#include "Ball.h"

int Object::nextObjId = 0;

Object::Object(QPoint initPoint){
    point = initPoint;
    objId = ++nextObjId;
    World::getInstance()->add(this);
}


Object::Object(){
objId = ++nextObjId;
World::getInstance()->add(this);
}

//inline
    Object::~Object() {

    }

bool Object::getHit(){}

void Object::updatePosition(){}
bool Object::getBound(){}

//I put this in here to fix a compile error and Im not sure why!
QString Object::getNet(){

}

