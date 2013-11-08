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


#include "Player.h"
#include "Ball.h"
#include "Shapes.h"

using namespace std;

class World //Can we get a worldSize integer that returns the number of pixels wide the world is? - PJ
        //yup :) made one check getWorldSize()
{
    private:
        vector<Player*> GamePlayers;
        vector<Object*> objects;
        bool powerUps;
        int difficulty;
        QPoint* worldMouse;
        int worldSize;
        bool roundFinished;
        int numberDead;
        int counter;
        World(){
            worldMouse = new QPoint();
            worldSize = 450;
            roundFinished = false;
        }
        static World* instance;
        vector<Ball*> balls;    //Just a note, ball is in the objects vector. Check out the "getType" method.  I think this
                                //is how we should keep track of all objects in the world.  Alternatively, you could modify
                                //the add method here to detect the type of object and assign it to a vector of the object's
                                //type.  Either one will work.  Just let me know which you pick. - PJ

    public:

        int getWorldSize(){
            return worldSize;

        }
        void died(){
            numberDead++;
        }

        void addBall(Ball* ballin){
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

       vector<Object*> getObjects(){
           return objects;
       }

       void setworldMouse(QPoint in){
            worldMouse->setX(in.x());
            worldMouse->setY(in.y());
       }

     //  void setUp(int, int, bool);

       // adds <obj> to Object in world
       void add(Object *obj) {objects.push_back(obj);}

       QString getBlock();
    
        //----------------------------------------
        //Getters and setters
        //----------------------------------------
        int getDifficulty() {return difficulty;}

        vector<Player*> getGamePlayers() {return GamePlayers;}
        Player* getGamePlayer(int id) {return GamePlayers.at(id);}
        vector<Object*> getObject() {return objects;}
        void setupPlayers(int num);
        void setRoundFinished(bool finished) {roundFinished = finished;}
        bool getRoundFinished() {return roundFinished;}

        void setDifficulty(int newDifficulty) { difficulty = newDifficulty; }
        void setPowerUps(bool pow) {powerUps = pow;
                                   counter = 0;}


    //methods 

        // update all elements in this game world
        void UpdateWorld();

        void pointScoredReset();

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




