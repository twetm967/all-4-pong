#include "GameLabel.h"
#include "Objects.h"
#include "Paddle.h"
#include "Shapes.h"
#include "Ball.h"

void GameLabel::initializeObj(QString objType) {
    if (objType == "Paddle")
        obj = new Paddle();
    else if(objType =="Ball")
        obj = new Ball(10,225,225,-1);
    else if(objType =="Shapes")
        obj = new Shapes();
    else
        obj = new Object();
}

void GameLabel::updatePosition() {
    obj->updatePosition();
    this->move(obj->getQPoint().x(),obj->getQPoint().y());
}
