#ifndef PADDLE_H
#define PADDLE_H

#include "Objects.h"
#include <QObject>
#include <vector>



class Paddle : public Objects
{
    int position;
    int length;

public:
    Paddle(int newPosition, int newLength): position(newPosition), length(newLength) { }
    
    // prints the current paddle state out to offshore text file,
    // returning a boolean value indicating print success
    bool printPaddleInfo();

    // reads the current paddle state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores paddle state in instance variables
    bool readPaddleInfo();
    
};

#endif // PADDLE_H
