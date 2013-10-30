
#include "Paddle.h"

Paddle::Paddle(int index):Objects() {

   // setMouseTracking(true);

    playerId = index;

    QPoint pnt;

    if(index == 0 || index == 2){
     //person is on the bottom or top change their x
        pnt.setX(205);
        if(index == 0){
        pnt.setY(420);
        }else{
            pnt.setY(10);
        }

        this->setTopLeft(pnt);

        this->setWidth(101);
        this->setHeight(17);
        *changer = this->topLeft().x();

        qDebug() << index << ", "<< *changer << ',' << this->topLeft().x();
    }
    if(index == 1 || index == 3){
     //person is on the left or right
        pnt.setY(205);
        if(index == 1){
        pnt.setX(420);
        }else{if(index == 3){
            pnt.setX(10);
            }else{
                //we broke
                qDebug() << "whoops";
            }
        }

        this->setWidth(17);
        this->setHeight(101);
        qDebug() << index << ", "<< *changer << ',' << this->topLeft().y();
        *changer = this->topLeft().y();
qDebug() << index << ", "<< *changer << ',' << this->topLeft().x();

    }
    else{
    //index is something else. uh-oh


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

    /*    void MovableLabel::mousePressEvent(QMouseEvent *ev) {
            if(widg->CheckClick()){
                mouseDragging = true;
                offset = ev->pos(); // location where mouse was clicked within the label
            }else if(widg->CheckDelete()){
                int i = obj->getId();
                World::getInstance().destroy(i);
                widg->KillMe(this);

            }
        }
*/



         //.cpp file



        void Paddle::Move(QPoint Q){

            if(playerId == 0 || playerId == 2){
                if(Q.x() > 0 || Q.x() < 350){

              *changer = Q.x();
                 }
             //person is on the bottom or top change their x
            }

            if(playerId == 1 || playerId == 3){
                if(Q.y() > 0 && Q.y() < 350){
             //person is on the left or right
              *changer = Q.y();
            }
            else{
            //index is something else. uh-oh
                qDebug() << "Woops";}

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
