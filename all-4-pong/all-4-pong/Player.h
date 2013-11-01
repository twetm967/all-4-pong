#ifndef Player_H
#define Player_H


#include <vector>
#include <QPoint>

//class Paddle;

//This class looks sparse right now, going to contain things like a mouse pointer
// ai brain
// and lots of networking.
class Player
{
protected:
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



class AI : public Player
{
    private:
    int difficulty;
        
    public:

            AI(){}                            //takes (difficulty);
            AI(QPoint);
            ~AI(){}

};

class User : public Player
{
    private:
        

    public:
            User(){}
            User(QPoint);
            ~User(){}

};

#endif
