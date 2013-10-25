
#include "highscores.h"


//initiates the HighScores thingy. New ever time a new server is made?
HighScores::HighScores(){
    QFileDevice File = new QFileDevice();

    File.open()
}

//returns the scores in decrementing order
// largest -> smallest
// to be used inside of positionGameScores
vector<int> HighScores::getGameScores(){

}

//Positions the game scores inside of the highScores vector
void HighScores::positionGameScores(){

}

//Creates the QWidget to be displayed later.
void HighScores::makeLeaderBoard(){

}

//And by later i mean here!!!
// displays the QWidget of the Leaderboards.
ofstream HighScores::getLeaderBoard(){

}

//increases the score of the indexed paddle.
// so the highscores class calls incScore(where it went out);
void HighScores::incScore(int index){

}

//displays the players score on his side of the board.
QString HighScores::getScore(int index){

}
