#ifndef WORLD_H
#define WORLD_H


#include <string>
#include <vector>
#include <QMouseEvent>
#include <QMainWindow>
#include <QDebug>
#include <vector>
#include <QString>

#include "start.h"
#include "Player.h"
#include "ingame.h"
#include "Ball.h"

using namespace std;

class World
{
    private:
        vector<Player*> GamePlayers;
        vector<Object*> Objects;
       // Map* field =
        int difficulty;
        InGame* gameScreen;
        Ball *ball;
        QPoint worldMouse;


        World(){}              //takes nothing. It gets instantiated later.
        static World instance;


    public:
       static World& getInstance(){

           return instance;
       }

       QPoint getMouse(){

           return worldMouse;
       }

       void setworldMouse(QPoint in){

           worldMouse  = in;
       }

       void setUp(Start*);

       // adds <obj> to Object in world
       void add(Object *obj) {Objects.push_back(obj);}


    
        //----------------------------------------
        //Getters and setters
        //----------------------------------------
        int getDifficulty() {return difficulty;}

        vector<Player*> getGamePlayers() {return GamePlayers;}
        vector<Object*> getObject() {return Objects;}






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




