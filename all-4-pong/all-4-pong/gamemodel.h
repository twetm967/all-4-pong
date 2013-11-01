#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include "start.h"
#include "World.h"

//Should this be a singleton structure? - PJ
//Yes, it should. JMP
//Now it is! - JMP
class GameModel
{
private:

    int* scorePlayerBottom;
    int* scorePlayerLeft;
    int* scorePlayerRight;
    int* scorePlayerTop;
    int difficulty;
    int numberOfPlayers;
    bool powerUps;

    GameModel();
    static GameModel instance; // the only instance of the singleton GameModel class

public:

    static GameModel& getInstance(); // returns the only instance of the singleton GameModel class

   void setNumOfPlayers(int);
   void setDifficulty(int);
   void setPowerUps(bool);

   void CreateWorld();

   // updates the current game world
   void UpdateWorld();


   ~GameModel();
};

#endif // GAMEMODEL_H
