
#include "highscores.h"



//initiates the HighScores thingy.
//Creates a new file on each computer
//that plays
HighScores HighScores::instance;


// returns a copy of the username belonging to the player with <playerId>
string HighScores::getPlayerName(int playerId) {
    string playerName;

    return playerName;
}

// returns a copy of the score belonging to the player with <playerId>
int HighScores::getPlayerScore(int playerId) {
    int playerScore;

    return playerScore;
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

/*//displays the players score on his side of the board.
QString HighScores::getScore(int index){

}*/

// prints the current high scores and related game state
// out to the highscore offshore text file,
// returning a boolean value indicating print success
bool HighScores::printHSInfo(QString data) {
    bool didPrint = false;

    // establish connection with text file

    if (/*connection succeeds*/ true  /*could we just return this?*/) {
        // gather object state and concatenate into string
        // print string of state to text file
        didPrint = true;
    }

    return didPrint;
}


// reads the current high scores and related game state
// from the highscore offshore text file,
// returning a boolean value indicating read success;
// if read succeeds, stores high scores and related game state in instance variables
bool HighScores::readHSInfo() {

    bool didRead = false;

    // establish connection with text file

    if (/*connection succeeds*/true) {
        // read string of state from text file
        // parse string and store object state in instance variables
        didRead = true;
    }

    return didRead;
}
