/*#ifndef GAMEMODEL_H
#define GAMEMODEL_H


//#include "World.h"

#include "Timer.h"
#include "start.h"

//tried tomake it hold a gamescreen so it could close it but to no avail.
//#include "ingame.h"
//using namespace Ui;

class Start;
class inGame;
//Should this be a singleton structure? - PJ
//Yes, it should. JMP
//Now it is! - JMP
//good job guys. doing good work. it's all coming together nicely :D - DR
class GameModel
{
private:

    GameModel();
    static GameModel instance; // the only instance of the singleton GameModel class

public:

    static GameModel& getInstance(); // returns the only instance of the singleton GameModel class

   ~GameModel();
};

#endif // GAMEMODEL_H

*/
