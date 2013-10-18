class Player
{
    private:
        Paddle();
        int Score;
        int Health;
    public:
        Player();
        ~Player();
    
        void point();
        void damage();
    
        void Win();
        
};//player class

class Player::AI
{
    private:
        
    public:
            AI(int);                            //takes (difficulty);
            ~AI();
};

class Player::User
{
    private:
        
    public:
            User();
            ~User();
}