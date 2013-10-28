//Shapes.cpp
#include "Shapes.h"
#include "Objects.h"

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


    Shapes::Shapes():Objects() { }
