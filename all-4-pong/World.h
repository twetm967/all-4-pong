#ifndef WORLD_H
#define WORLD_H

#include <string>
#include <vector>
//#include "Player.h"

class Player;
class Objects;
using namespace std;

class World
{
    private:
        vector<Player*> players;
        vector<Objects*> objects;
        //Map* world = new Map();
        int difficulty;
        int gameMode;
        static World *instance;

        World();              //takes  (#of users, game mode, difficulty)



    public:
       static World* getInstance();

       void setUp();

       // adds <obj> to objects in world
       void add(Objects *obj) {objects.push_back(obj);}

    
        //----------------------------------------
        //Getters and setters
        //----------------------------------------
        int getDifficulty() {return difficulty;}
        int getGameMode() {return gameMode;}
        vector<Player*> getPlayers() {return players;}
        vector<Objects*> getObjects() {return objects;}






    //methods 


        // prints the current world state out to offshore text file,
        // returning a boolean value indicating print success
        bool printWorldInfo();

        // reads the current world state from offshore text file,
        // returning a boolean value indicaing read success;
        // if read succeeds, stores world state in instance variables
        bool readWorldInfo();
    
};//Game Class

#endif // WORLD_H




