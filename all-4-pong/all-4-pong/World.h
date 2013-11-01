#ifndef WORLD_H
#define WORLD_H


#include <string>
#include <vector>
#include <QMouseEvent>
#include <QMainWindow>
#include <QDebug>
#include <vector>
#include <QString>
#include <QWidget>

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
        bool powerUps;
        int difficulty;
     //   InGame* gameScreen; // Should be moved; World cannot access gui
        Ball *ball;
        QPoint* worldMouse; // Should be moved; World cannot access gui


        World(){}              //takes nothing. It gets instantiated later.
        static World* instance;
        vector<Ball*> balls;

    public:


        void add(Ball* ballin){
            balls.push_back(ballin);
        }

       static World* getInstance(){
           if(instance == NULL){
               instance = new World;
           }
           return instance;
       }

       QPoint* getMouse(){

          return worldMouse;


       }

       vector<Ball*> getBalls(){
           return balls;
       }

       void setworldMouse(QPoint in){
            worldMouse->setX(in.x());
            worldMouse->setY(in.y());
       }

       void setUp(int, int, bool);

       // adds <obj> to Object in world
       void add(Object *obj) {Objects.push_back(obj);}


    
        //----------------------------------------
        //Getters and setters
        //----------------------------------------
        int getDifficulty() {return difficulty;}

        vector<Player*> getGamePlayers() {return GamePlayers;}
        vector<Object*> getObject() {return Objects;}





    //methods 

        // update all elements in this game world
        void UpdateWorld();

        // reset all elements in this game world
        void ResetWorld();

        // prints the current world state out to offshore text file,
        // returning a boolean value indicating print success
        bool printWorldInfo();

        // reads the current world state from offshore text file,
        // returning a boolean value indicaing read success;
        // if read succeeds, stores world state in instance variables
        bool readWorldInfo();
    
};//Game Class


#endif // WORLD_H




