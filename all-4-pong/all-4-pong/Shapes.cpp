//Shapes.cpp
#include "Shapes.h"
#include "Object.h"

    // prints the current shape state out to offshore text file,
    // returning a boolean value indicating print success
    bool printShapeInfo() {
        bool didPrint = false;

        // establish connection with text file

        if (/*connection succeeds*/true) {
            // gather object state and concatenate into string
            // print string of state to text file
            didPrint = true;
        }

        return didPrint;
    }

    // reads the current shape state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores shape state in instance variables
    bool readShapeInfo() {
        bool didRead = false;

        // establish connection with text file

        if (/*connection succeeds*/true) {
            // read string of state from text file
            // parse string and store object state in instance variables
            didRead = true;
        }

        return didRead;
    }


    Shapes::Shapes():Object() {
          QPoint p;
          int initx = rand() % World::getInstance()->getWorldSize();
          int inity = rand() % World::getInstance()->getWorldSize();
          //bounds checking
          if(initx < 100) initx += 100;
          if(initx  > World::getInstance()->getWorldSize() - 100) initx  -= 100;
          if(inity < 100) inity  += 100;
          if(inity  > World::getInstance()->getWorldSize() - 100) inity  -= 100;
           x = initx;
           y = inity;

    }
