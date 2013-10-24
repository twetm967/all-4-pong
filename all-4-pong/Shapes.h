#ifndef SHAPES_H
#define SHAPES_H

#include <vector>

class Shapes
{
    private:
        int x;
        int y;
        PowerUp* boost;                                     //would need a powerup class and associated inheritors
    public:
        Shapes();
        ~Shapes();


        // prints the current shape state out to offshore text file,
        // returning a boolean value indicating print success
        bool printShapeInfo();

        // reads the current shape state from offshore text file,
        // returning a boolean value indicaing read success;
        // if read succeeds, stores shape state in instance variables
        bool readShapeInfo();

};

#endif
