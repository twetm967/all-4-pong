#include "World.h"
#include <vector>
World World::instance;

World::World(/*int numPlayers, int inGameMode, int inDif*/){
    //init variables




    // prints the current world state out to offshore text file,
    // returning a boolean value indicating print success
    bool printWorldInfo() {
        bool didPrint = false;

        // establish connection with text file

        if (/*connection succeeds*/) {
            // gather object state and concatenate into string
            // print string of state to text file
            didPrint = true;
        }

        return didPrint;
    }

    // reads the current world state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores world state in instance variables
    bool readWorldInfo() {
        bool didRead = false;

        // establish connection with text file

        if (/*connection succeeds*/) {
            // read string of state from text file
            // parse string and store object state in instance variables
            didRead = true;
        }

        return didRead;
    }

}



