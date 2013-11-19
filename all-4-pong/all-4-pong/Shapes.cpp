//Shapes.cpp
#include "Shapes.h"
#include "Object.h"
#include <sstream>


    // prints the current shape state out to offshore text file,
    // returning a boolean value indicating print success
void Shapes::getInfo(vector<string> *strings){

    point.setX(stoi(strings->at(1)));
    point.setY(stoi(strings->at(2)));
    rect.setX(stoi(strings->at(1)));
    rect.setY(stoi(strings->at(2)));
    rect.setWidth(stoi(strings->at(3)));
    rect.setHeight(stoi(strings->at(4)));

}
//Shapes/x/y/width/height/
void Shapes::setInfo(ofstream *f){
    *f <<   "shape/" << point.x() << "/" << point.y() << "/" << rect.width() << "/" << rect.height() << "/" << endl;
}

    // reads the current shape state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores shape state in instance variables


    QString Shapes::getNet(){
        QString out;
        if(net == true){
            stringstream ss;
            ss << "2/" << this->getRect().x() << "/" << this->getRect().y() << "/" << this->getRect().width() << "/" << this->getRect().height() << "/";
            out = QString::fromStdString(ss.str());
            net = false;
        }else{ out = "";}
        return out;
    }
// 2/x/y/width/height/

   void Shapes::updatePosition(){


    }

    Shapes::Shapes(bool flip):Object() {
        net = flip;
        //PlayerId = -1;
        int initx = rand() % World::getInstance()->getWorldSize();
        int inity = rand() % World::getInstance()->getWorldSize();
        rect.setX(initx);
        rect.setY(inity);
        int h = rand() % 30 + 25;
        int w = rand() % 30 + 25;
        rect.setHeight(h);
        rect.setWidth(w);
        //bounds checking
        //off the edges
        if(initx < 100)
            initx += 200;
        if(inity < 100)
            inity  += 200;
        if(initx > World::getInstance()->getWorldSize() - (rect.width() + 75))
            initx  -= rect.width()  + 150;
        if(inity > World::getInstance()->getWorldSize() - (rect.height() + 75))
            inity  -= rect.height() + 150;
        //keeps it out of the middle
        while(abs(initx - 205) < 100 && abs(inity - 205) < 100){
            int num = rand() % 200 - 100;

            initx += num; inity += num;
        }
        rect.setX(initx);
        rect.setY(inity);
        rect.setHeight(h);
        rect.setWidth(w);
        point.setX(initx);
        point.setY(inity);
        //   World::getInstance()->add(this);

    }

    Shapes::~Shapes(){
     //~Object();
    delete boost;
    }

    double Shapes::getDistancetoPaddle(QPoint pointIn){
        if (pointIn.x() >= rect.topLeft().x() && pointIn.x() <= rect.topRight().x() && pointIn.y() <= rect.topLeft().y()){
        //hit the top of the box
             PlayerId = 2;
             return (double)1+ min(abs(pointIn.y() - rect.topLeft().y()), abs(pointIn.y() - rect.topRight().y()));
        }
         //hit the bottom
        else if(pointIn.x() >= rect.bottomLeft().x() && pointIn.x() <= rect.bottomRight().x() && pointIn.y() >= rect.bottomLeft().y()){
            PlayerId = 0;
            return (double)1 + min(abs(pointIn.y() - rect.bottomLeft().y()),abs(pointIn.y() - rect.bottomRight().y()));
        }
        //hit the left side
        else if (pointIn.y() >= rect.topLeft().y() && pointIn.y() <= rect.bottomLeft().y() && pointIn.x() <= rect.topLeft().x()){
            PlayerId = 3;
            return (double)1 + min(abs(pointIn.x() - rect.topLeft().x()), abs(pointIn.x() - rect.topRight().x()));
        }
        //hit the right side
        else if(pointIn.y() >= rect.topRight().y() && pointIn.y() <= rect.bottomRight().y() && pointIn.x() >= rect.bottomRight().x()){
            PlayerId = 1;
            return (double) 1 + min(abs(pointIn.x() - rect.topRight().x()), abs(pointIn.x() - rect.bottomLeft().x()));
        }
        else{
            PlayerId = -1;
            return -1;
            //return min(sqrt(pow(pointIn.x()-line.x1(),2)+pow(pointIn.y()-line.y1(),2)),sqrt(pow(pointIn.x()-line.x2(),2)+pow(pointIn.y()-line.y2(),2)));
        }
    }

    void Shapes::hitShape(Ball* b){
        int pos;
        switch(PlayerId){
        case 0: //bottom
            pos = rect.bottomLeft().y();
            b->setY(pos + b->getRadius());//*abs(b->getSpeedY())/b->getSpeedY());
            b->incrementSpeedX(5);
            b->invertSpeedY();
            break;
        case 1: //right
            pos = rect.bottomRight().x();
            b->setX(pos + b->getRadius());//*abs(b->getSpeedX())/b->getSpeedX());
            b->incrementSpeedY(5);
            b->invertSpeedX();
            break;
        case 2:// top
            pos = rect.topLeft().y();
            b->setY(pos - b->getRadius());//*abs(b->getSpeedY())/b->getSpeedY());
            b->incrementSpeedX(5);
            b->invertSpeedY();
            break;
        case 3:// left
            pos = rect.topLeft().x();
            b->setX(pos - b->getRadius());//*abs(b->getSpeedX())/b->getSpeedX());
            b->incrementSpeedY(5);
            b->invertSpeedX();
            break;
}

    }
