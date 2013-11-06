#ifndef Player_H
#define Player_H


#include <vector>
#include <QPoint>
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
        int ID;
        static int nextID;
        int speed; // why do players have a speed? - JMP
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
        virtual void reset() {}
        Score* getCurrentScore() {return currentScore;}
        int getHealth() {return Health;}
    
        void Win();
        virtual int getSpeed();
        
};//player class



class AI : public Player
{
    private:
    int difficulty;
    int iterator;

    bool flop;
        
    public:

    void reset();

    AI(int diff):Player(){
        hand = new QPoint(205,205);
        flop = false;
        if(1 == rand() % 2)flop = true;
        iterator = 150;
        difficulty = diff;

    }                            //takes (difficulty);
            AI(QPoint);
          QPoint* getHand();

            void command();
            void change();
            void follow();
            void followRandom();
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
           void calculateSpeed();

};

#endif
