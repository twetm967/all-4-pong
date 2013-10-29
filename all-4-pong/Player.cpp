
#include "Player.h"

int Player::nextID = 0;

Player::Player(){
    ID = nextID;
    pad = new Paddle(ID);
    Health = 7;

    nextID++;
}

Player::~Player(){}

void Player::damage(){

Health--;

}

