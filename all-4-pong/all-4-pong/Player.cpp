
#include "Player.h"
#include "ingame.h"
int Player::nextID = 0;


Player::Player(){
    ID = nextID;

    Health = 7;

    nextID++;
}

Player::~Player(){


}

void Player::damage(){

Health--;

}



