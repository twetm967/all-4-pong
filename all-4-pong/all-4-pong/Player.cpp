
#include "Player.h"
#include "ingame.h"
int Player::nextID = 0;

Player::Player(QPoint in){
    ID = nextID;

    pad = new Paddle(ID,in);
    Health = 7;

    nextID++;
}

Player::Player(){
    ID = nextID;
    QPoint n;
    n.setX(0);
    n.setY(0);
    pad = new Paddle(ID,n);
    Health = 7;

    nextID++;
}

Player::~Player(){


}

void Player::damage(){

Health--;

}



