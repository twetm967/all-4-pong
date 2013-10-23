#include "Objects.h"
#include "Ball.h"
#include "ui_game.h"
#include <QRect>
#include <QPoint>
#include <vector>

// prints the current ball state out to offshore text file,
// returning a boolean value indicating print success
bool printBallInfo() {
    bool didPrint = false;

    // establish connection with text file

    if (/*connection succeeds*/) {
        // gather object state and concatenate into string
        // print string of state to text file
        didPrint = true;
    }

    return didPrint;
}

// reads the current ball state from offshore text file,
// returning a boolean value indicaing read success;
// if read succeeds, stores ball state in instance variables
bool readBallInfo() {
    bool didRead = false;

    // establish connection with text file

    if (/*connection succeeds*/) {
        // read string of state from text file
        // parse string and store object state in instance variables
        didRead = true;
    }

    return didRead;
}

void Ball::Direction(){}
void Ball::Bounce(){}



