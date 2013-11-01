#ifndef Player_H
#define Player_H


#include <vector>
#include <QPoint>
#include "World.h"

//class Paddle;

//This class looks sparse right now, going to contain things like a mouse pointer
// ai brain
// and lots of networking.
class Player
{
protected:
        int Score;
        int Health;
        QPoint* hand;
        int ID;
        static int nextID;
    public:
        Player();
        ~Player();
      virtual QPoint* getHand();
    
        void point();
        void damage();
    
        void Win();
        
};//player class



class AI : public Player
{
    private:
    int difficulty;
    int iterator;
    QPoint* AIPoint;
    bool flop;
        
    public:

    AI(int diff):Player(){
        AIPoint = new QPoint(205,205);
        flop = true;
        iterator = 150;
        difficulty = diff;//World::getInstance()->getDifficulty();

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
        

    public:
    User():Player(){

            }
            User(QPoint);
            ~User(){}
           QPoint* getHand();

};

#endif
