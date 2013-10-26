#ifndef PADDLE_H
#define PADDLE_H

#include "Objects.h"
#include <QObject>
#include <vector>
#include <Ball.h>



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


    void setPlayerId(int inID){playerId = inID;}
    void  setPosition(int inPos){position = inPos;}
    void  setLength(int inLength){ paddleLength = inLength;}
    //*******************************


    bool getHit(Ball);



    
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
