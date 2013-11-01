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

    AI():Player(){
        AIPoint = new QPoint(205,205);
        flop = true;
        iterator = 150;

    }                            //takes (difficulty);
            AI(QPoint);
          QPoint* getHand();


            void change();


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
