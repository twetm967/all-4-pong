#ifndef POWERUP_H
#define POWERUP_H

class PowerUp
{
private:


public:

    virtual PowerUp();

    virtual addBoost();

};

class Speed : PowerUp
{
private:
    int spd;

public:

    //makes the ball go faster by <speed>
    void addBoost();

};

class Length : PowerUp
{
private:
    int len;

public:

    //makes the ball go faster by <speed>
    void addBoost();

};

#endif // POWERUP_H
