#ifndef Player_H
#define Player_H


#include <vector>
#include "paddle.h"

//class Paddle;


class Player
{
    private:
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
        
};//player class



class AI : Player
{
    private:
        
    public:
            AI(int);                            //takes (difficulty);
            ~AI();
};

class User : Player
{
    private:
        
    public:
            User();
            ~User();
};

#endif
