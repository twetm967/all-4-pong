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

#include "Ball.h"
#include "ingame.h"
using namespace std;

class World //Can we get a worldSize integer that returns the number of pixels wide the world is? - PJ
{
    private:
        vector<Player*> GamePlayers;
        vector<Object*> Objects;
        bool powerUps;
        int difficulty;
     //   InGame* gameScreen; // Should be moved; World cannot access gui
        Ball *ball;  //We should just have a vector of balls if we are going to do this.  Check out my notes on the vector of balls. - PJ
        QPoint* worldMouse; // Should be moved; World cannot access gui
        int worldSize;

        World(){}              //takes nothing. It gets instantiated later.
        static World* instance;
        vector<Ball*> balls;  //Just a note, ball is in the Objects vector. Check out the "getType" method.  I think this is how we should keep track of all objects in the world.  Alternatively, you could modify the add method here to detect the type of object and assign it to a vector of the object's type.  Either one will work.  Just let me know which you pick. - PJ

    public:

        int getWorldSize(){
            return worldSize;
        }

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




