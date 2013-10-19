#ifndef WORLD_H
#define WORLD_H

#include <string>
#include <vector>
#include "Player.h"

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
    
        //----------------------------------------
        //Getters and setters
        //----------------------------------------
        int getDifficulty() {return difficulty;}
        int getGameMode() {return gameMode;}
        vector<Player*> getPlayers() {return players;}






    //methods 
    
};//Game Class

#endif // WORLD_H




