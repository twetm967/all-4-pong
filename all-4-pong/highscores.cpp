
#include "highscores.h"



//initiates the HighScore thingy.
//Creates a new file on each computer
//that plays
HighScore HighScore::instance;


//returns the scores in decrementing order
// largest -> smallest
// to be used inside of positionGameScores
vector<int> HighScore::getGameScores(){

}

//Positions the game scores inside of the highScores vector
void HighScore::positionGameScores(){

}

//Creates the QWidget to be displayed later.
void HighScore::makeLeaderBoard(){

}

//And by later i mean here!!!
// displays the QWidget of the Leaderboards.
ofstream HighScore::getLeaderBoard(){

}

//increases the score of the indexed paddle.
// so the highscores class calls incScore(where it went out);
void HighScore::incScore(int index){

}

//displays the players score on his side of the board.
QString HighScore::getScore(int index){

}
