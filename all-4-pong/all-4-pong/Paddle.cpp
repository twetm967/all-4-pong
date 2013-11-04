
#include "Paddle.h"
#include "Ball.h"
#include "Object.h"
#include "World.h"

#include <QRect>
#include <vector>
#include <QDebug>
#include <QString>

#include "Paddle.h"

//sets up the paddle depending on what location it is to be in.
void Paddle::setUp() {
    switch(playerId){
        case 0:
            point.setX((worldSize - length)/2);
            point.setY(worldSize - (2 * width));
            break;
        case 1:
            point.setX(width);
            point.setY((worldSize - length)/2);
            break;
        case 2:
            point.setX((worldSize - length)/2);
            point.setY(width);
            break;
        case 3:
            point.setX(worldSize - (2 * width));
            point.setY((worldSize - length)/2);
            break;
    }
}

QString Paddle::getNetworkInformation(){

}

//Planning on getting rid of this unless you need it for the AI.
//If you do, give me a method to call in the balls logic.
        bool Paddle::getHit() {
            return false;
        }

    // prints the current paddle state out to offshore text file,
    // returning a boolean value indicating print success
    bool Paddle::printPaddleInfo() {
        bool didPrint = false;

        // establish connection with text file

        if (/*connection succeeds*/true) {
            // gather object state and concatenate into string
            // print string of state to text file
            didPrint = true;
        }

        return didPrint;
    }

    // reads the current paddle state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores paddle state in instance variables
    bool Paddle::readPaddleInfo() {
        bool didRead = false;

        // establish connection with text file
//Joseph you're a boss!!!
        if (/*connection succeeds*/true) {
            // read string of state from text file
            // parse string and store object state in instance variables
            didRead = true;
        }

        return didRead;
    }


    //runs the  update position code overridden from Object.

    // then moves them accordingly.
    void Paddle::updatePosition() {
        switch (playerId) { //person is on the bottom or top change their x, else change their y
            case 0:
                this->setX(Hand->getHand()->x()-length);
                break;
            case 1:
                this->setY(Hand->getHand()->y()-length);
                break;
            case 2:
                this->setX(Hand->getHand()->x()-length);
                break;
            case 3:
                this->setY(Hand->getHand()->y()-length);
                break;
        }
        speed = Hand->getSpeed();
    }


    void Paddle::setY(int newY) {
        if (playerId % 2 == 0)
            return;
        point.setY(newY);
        if(point.y() < 0)
            point.setY(0);
        if(point.y() > (worldSize - (2*length)))
            point.setY(worldSize - (2*length));
    }


    void Paddle::setX(int newX) {
        if (playerId % 2 == 1)
            return;
        point.setX(newX);
        if(point.x() < 0)
            point.setX(0);
        if(point.x() > (worldSize - (2*length)))
           point.setX(worldSize - (2*length));
    }
