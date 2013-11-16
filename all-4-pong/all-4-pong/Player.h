#ifndef Player_H
#define Player_H


#include <vector>
#include <QPoint>
#include <iostream>
#include <fstream>

#include "World.h"
#include "score.h"

//class Paddle;

//This class looks sparse right now, going to contain things like a mouse pointer
// ai brain
// and lots of networking.
class Player
{
protected:
        Score* currentScore;
        int Health;
        QPoint* hand;
        QString username;
        int ID;
        static int nextID;
        int speed; //  why do players have a speed? - JMP
                    // because the player's hand is the thing that's actually
                    // moving and the paddle just follows along. So the source is
                    // the hand and the speed is then relayed to the paddle for JP. - Recker
    public:
        Player();
        ~Player(){
//            delete currentScore;
//            delete hand;
            --nextID;
        }
        virtual QPoint* getHand();

        void point();
        void damage();
        QPoint* getPoint(){
            return hand;
        }

        virtual void reset() {}
        Score* getCurrentScore() {return currentScore;}
        int getHealth() {return Health;}
    
        void Win();
        virtual int getSpeed();
        virtual QString getNet();
        virtual int getID(){return ID;}
        virtual void setUsername(QString name){username = name;}
        virtual QString getUsername(){return username;}
        virtual void setPoint(int x, int y);

        
};//player class



class AI : public Player
{
    private:
    int difficulty;
    int iterator;

    bool flop;
        
    public:

    void reset();
    //QString getNet();

    AI(int diff):Player(){
        hand = new QPoint(205,205);
        difficulty = diff;

    }                            //takes (difficulty);
            AI(QPoint);
          QPoint* getHand();
          int getDiff(){return difficulty;}
            void command();
            void setUsername(QString name){username = name;}
            QString getUsername(){return username;}
            int getID(){return ID;}
            void followRandom(int,int);
            ~AI(){}

};

class User : public Player
{
    private:
    int oldX, oldY;


    public:
    User():Player(){

            }

            User(QPoint);
            ~User(){}
            int getSpeed();
           QPoint* getHand();
           int getID(){return ID;}
           void calculateSpeed();
           void setUsername(QString name){username = name;}
           QString getUsername(){return username;}
           //QString getNet(); //gets the string to send over the network

};

#endif
