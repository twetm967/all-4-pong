#ifndef Player_H
#define Player_H


#include <vector>
#include "Paddle.h"

//class Paddle;


class Player
{
protected:
        Paddle* pad;
        int Score;
        int Health;
        int ID;

        static int nextID;
    public:
        Player();
        ~Player();
    
        void point();
        void damage();
    
        void Win();

        Paddle* getPaddle(){return pad;}
        
};//player class



class AI : Player
{
    private:
    int difficulty;
        
    public:

};

class User : Player
{
    private:
        

};

#endif
