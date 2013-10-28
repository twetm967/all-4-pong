#ifndef WORLD_H
#define WORLD_H

#include <string>
#include <vector>
//#include "Player.h"

class Player;
using namespace std;

class World
{
    private:
        vector<Player*> players;
        //Map* world = new Map();
        int difficulty;
        int gameMode;

        World();              //takes  (#of users, game mode, difficulty)
        static World instance;


    public:
        static World& getInstance(){
                return instance;
            }
       void setUp();
    
        //----------------------------------------
        //Getters and setters
        //----------------------------------------
        int getDifficulty() {return difficulty;}
        int getGameMode() {return gameMode;}
        vector<Player*> getPlayers() {return players;}






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




