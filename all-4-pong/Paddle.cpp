#include "Paddle.h"
#include "Ball.h"
#include "Objects.h"
#include <QRect>
#include <vector>


#include <QRect>



Paddle::Paddle(int index)/*:Objects()*/ {
    paddleLength = 101;
    playerId = index;

}


        bool Paddle::getHit(Ball* ball){

             //Checks the balls space to the objects space.
            if(this->bottomRight().x() >= ball->getX() &&
                    this->topLeft().x()     <= ball->getX() &&
                    this->bottomRight().y() >= ball->getY() &&
                    this->topLeft().y()     <= ball->getY()){
              //the ball hit do stuf

                 return true;
             }// it did not hit do nothing
                  return false;
         }


         //.cpp file
        void Paddle::mouseMoveEvent(QMouseEvent* event){
            if(event->y() > 0 && event->y() < 300){
                int i = event->y();
                //ui->MLabel->move(20, i);
                }
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
