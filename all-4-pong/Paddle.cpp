#include "paddle.h"
#include <vector>

#include <QRect>



        Paddle::Paddle(int newPosition, int newLength, int newSideID, int newPlayerID) {
            paddleLength = newLength;
            position = newPosition;
            playerId = newPlayerID;
            sideId = newSideID;

        }


        bool paddle::getHit(Ball ball){

             //Checks the balls space to the objects space.
             if(this->bottomRight().x >= ball->getX() &&
                     this->topLeft().x     <= ball->getX() &&
                     this->bottomRight().y >= ball->getY() &&
                     this->topLeft().y     <= ball->getY()){
                 //the ball hit do stuf

                 return true;
             }// it did not hit do nothing
                 return false;
         }


    // prints the current paddle state out to offshore text file,
    // returning a boolean value indicating print success
    bool printPaddleInfo() {
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
    bool readPaddleInfo() {
        bool didRead = false;

        // establish connection with text file

        if (/*connection succeeds*/true) {
            // read string of state from text file
            // parse string and store object state in instance variables
            didRead = true;
        }

        return didRead;
    }

//}
