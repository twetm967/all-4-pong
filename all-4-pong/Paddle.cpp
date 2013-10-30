#include "Paddle.h"
#include "Ball.h"
#include "Objects.h"
#include <QRect>
#include <vector>
#include <QDebug>
#include <QMouseEvent>




Paddle::Paddle(int index):Objects() {

   // setMouseTracking(true);

    playerId = index;

    if(index == 0 || index == 2){
     //person is on the bottom or top change their x
        width() = 101;
        height() = 17;
        *changer = this->topLeft().x();

    }
    if(index == 1 || index == 3){
     //person is on the left or right

        width() = 17;
        height() = 101;
        *changer = this->topLeft().y();

    }
    else{
    //index is something else. uh-oh
        qDebug() << "Woops";

    }

}


        bool Paddle::getHit(Ball* ball){

             //Checks the balls space to the objects space.
            if(this->bottomRight().x() >= ball->getX() &&
                    this->topLeft().x()     <= ball->getX() &&
                    this->bottomRight().y() >= ball->getY() &&
                    this->topLeft().y()     <= ball->getY()){
              //the ball hit do stuff

                 return true;
             }// it did not hit do nothing
                  return false;
         }


         //.cpp file
        void Paddle::mouseMoveEvent(){

            QPoint Q = M->pos();

            if(playerId == 0 || playerId == 2){
                if(Q.x() > 0 || Q.x() < 350){

              *changer = M->x();
                 }
             //person is on the bottom or top change their x
            }


            if(playerId == 1 || playerId == 3){
                if(Q.y() > 0 && Q.y() < 350){
             //person is on the left or right
              *changer = M->y();
            }
            else{
            //index is something else. uh-oh
                qDebug() << "Woops";}


                }

            this->Move(changer);
        }



        void Paddle::Move(int* i){


        }

        //.h file


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

        if (/*connection succeeds*/true) {
            // read string of state from text file
            // parse string and store object state in instance variables
            didRead = true;
        }

        return didRead;
    }

//}
