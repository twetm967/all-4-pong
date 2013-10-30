
#include "Paddle.h"
#include "Ball.h"
#include "Objects.h"

#include <QRect>
#include <vector>
#include <QDebug>
#include <QString>

#include "Paddle.h"

Paddle::Paddle(int index, QPoint map):Objects() {

   // setMouseTracking(true);
   playerId = index;
   area = map;


int i = 0;
    if(index == 0 || index == 2){
     //person is on the bottom or top change their x

        //default x position.
        spot.setX(205);
        // if they're 0 put them on the bottom.
        if(index == 0){
        spot.setY(420);
        }else{                       //if they're 2 put them on top
            if(index == 2){
            spot.setY(10);
            }
        }

    }

    if(index == 1 || index == 3){
     //person is on the left or right
        spot.setY(205);

        if(index == 1){
        spot.setX(420);
        }else{if(index == 3){
            spot.setX(10);
            }else{
                //we broke
                qDebug() << "whoops";
            }
        }



       //   i = spot.y();
       // changer = this->topLeft().y();

    }
    else{
    //index is something else. uh-oh

    }
    spot = this->topLeft();
    this->setWidth(17);
    this->setHeight(101);


//changer = &i;
}


        bool Paddle::getHit(Ball* ball)
        {

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

    /*    void MovableLabel::mousePressEvent(QMouseEvent *ev) {
            if(widg->CheckClick()){
                mouseDragging = true;
                offset = ev->pos(); // location where mouse was clicked within the label
            }else if(widg->CheckDelete()){
                int i = obj->getId();
                World::getInstance().destroy(i);
                widg->KillMe(this);

            }
        } InGame* gameScreen = new InGame();
*/



         //.cpp file






        void Paddle::Move(QPoint Q){

            qDebug()<< "X,Y" << Q.x()<< ","<< Q.y();

//person is on the bottom or top change their x
            if(playerId == 0 || playerId == 2){
                if(Q.x() > 0 && Q.x() < 430){
                    setX(Q.x());

                 }

            }

            if(playerId == 1 || playerId == 3){
                if(Q.y() > 0 && Q.y() < 430){
                    setY(Q.y());

             //person is on the left or right
          //    spot.setY(Q.y());
            }
            else{
            //index is something else. uh-oh
                qDebug() << "Woops";}

                }

           // qDebug() << QString::number(spot.x(), 10) << ", " << QString:number(spot.y(), 10);
           // qDebug() << QString::number(*changer, 10);
          //  qDebug() << QString::number(this->x, 10) << ", " << QString::number(this->y, 10);

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
