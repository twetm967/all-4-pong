#ifndef PADDLE_H
#define PADDLE_H

#include "Objects.h"
#include <QObject>
#include <vector>



class Paddle : public Objects
{
    int position;
    int sideId;
    int playerId;
    int paddleLength;

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




    Paddle(int newPosition, int newLength, int newSideID, int newPlayerID): position(newPosition), paddleLength(newLength),
        playerID(newPlayerID), sideId(newSideID)  { }
    
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
