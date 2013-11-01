#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include "start.h"
#include "World.h"

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


public:
    GameModel();
    ~GameModel();

   void setNumOfPlayers(int);
   void setDifficulty(int);
   void setPowerUps(bool);

   void CreateWorld();


};

#endif // GAMEMODEL_H
