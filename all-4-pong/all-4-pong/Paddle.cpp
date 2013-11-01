
#include "Paddle.h"
#include "Ball.h"
#include "Objects.h"
#include "World.h"

#include <QRect>
#include <vector>
#include <QDebug>
#include <QString>

#include "Paddle.h"

//sets up the paddle depending on what location it is to be in.
void Paddle::setUp() {
    if(playerId == 0 || playerId == 2){//person is on the bottom or top change their x
        //default x position.
        point.setX(205);
        // if they're 0 put them on the bottom.
    if(playerId == 0){
       point.setY(420);
        }else{                       //if they're 2 put them on top
    if(playerId == 2){
        point.setY(10);
            }

        }
    //they are on top or bottom
    rectangle.setTopLeft(point);

   rectangle.setWidth(100);
   rectangle.setHeight(17);



}
    if(playerId == 1 || playerId == 3){
     //person is on the left or right
      point.setY(205);

        if(playerId == 1){
        point.setX(420);
        }else{if(playerId == 3){
            point.setX(10);
            }
        }
       rectangle.setTopLeft(point);
       rectangle.setWidth(17);
       rectangle.setHeight(100);
    }
}


//not sure how this is going to work yet. Will work on Friday.
        bool Paddle::getHit(Ball* ball)
        {

             //Checks the balls space to the objects space.
            if(rectangle.bottomRight().x() >= ball->getX() &&
                    rectangle.topLeft().x()     <= ball->getX() &&
                    rectangle.bottomRight().y() >= ball->getY() &&
                    rectangle.topLeft().y()     <= ball->getY()){
              //the ball hit do stuff

                 return true;
             }// it did not hit do nothing
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
    //gets the mouse position (TO be changed to player's mouse position)
    // then moves them accordingly.
    void Paddle::updatePosition() {

         spot = Hand->getHand();


//person is on the bottom or top change their x
        if(playerId == 0 || playerId == 2){

                this->setX(spot->x()-length);
        }

        if(playerId == 1 || playerId == 3){

                this->setY(spot->y()-length);

            }
    }

