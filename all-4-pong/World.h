#ifndef WORLD_H
#define WORLD_H

#include <string>
#include <vector>

class World
{
    private:
        vector<Player*> players;
        Map* world = new Map();
        int difficulty;
        int gameMode;
        World(int, int, int);              //takes  (#of users, game mode, difficulty)
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




