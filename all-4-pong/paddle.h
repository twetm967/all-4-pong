#ifndef PADDLE_H
#define PADDLE_H

#include "Objects.h"
#include <QObject>
#include <vector>



class Paddle : public QRect , public Objects
{
    int position;
    int sideId;
    int playerId;
    int paddleLength;
    //Width and Height!! of the paddle in other words
    //10 and 1!
    QPoint WandH;

public:
    //****Getters and setters****/
    int getPosition(){return position;}
    int getSideId(){return sideId;}
    int getLength(){return paddleLength;}
    int getPlayerId(){return playerId;}

    int setPlayerId(int inID){playerId = inID;}
    int setPosition(int inPos){position = inPos;}
    int setLength(int inLength){ paddleLength = inLength;}
    //*******************************

   bool paddle::getHit(Ball ball){

        //Checks the balls space to the objects space.
        if(this->bottomRight().x >= ball->getX() &&
                this->topLeft().x     <= ball->getX() &&
                this->bottomRight().y >= ball->getY() &&
                this->topLeft().y     <= ball->getY()){
            //the ball hit do stuff
            return true;
        }// it did not hit do nothing
            return false;
    }



    Paddle(int newPosition, int newLength, int newSideID, int newPlayerID):
        position(newPosition), paddleLength(newLength),
        playerId(newPlayerID), sideId(newSideID)  { }
    
    // prints the current paddle state out to offshore text file,
    // returning a boolean value indicating print success
    bool printPaddleInfo();

    // reads the current paddle state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores paddle state in instance variables
    bool readPaddleInfo();

    //
    
};

#endif // PADDLE_H
