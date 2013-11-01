#ifndef HIGHSCORES_H
#define HIGHSCORES_H

#include <QLabel>
#include <vector>
#include <QString>
#include <iostream>
#include <fstream>

using namespace std;

class HighScore
{

private:

    int firstHighestScore;
    int secondHighestScore;
    int thirdHighestScore;

    string firstHSPlayerName;
    string secondHSPlayerName;
    string thirdHSPlayerName;

    ofstream highScoreFile; // File;

    HighScore(){}

    static HighScore instance;

public:

    static HighScore& getInstance(){
             return instance;
     }

    ~HighScore(){}

    // returns a copy of the username belonging to the player with <playerId>
    string getPlayerName(int playerId);

    // returns a copy of the score belonging to the player with <playerId>
    int getPlayerScore(int playerId);


    /*------------- Needs reorganization below------------- */

    //returns the scores from a game in decrimenting order
    //largest -> smallest
    vector<int> getGameScores();

    //places the scores from the game into the high scores list
    //to be displayed.
    void positionGameScores();

    //creates the image of the leaderboard keeping code clean and fresh
    //like spearmint gum!
    void makeLeaderBoard();

    //shows the leader board as a QWidget object
    ofstream getLeaderBoard();

    //increments the score of the player takes the index
    //of the paddle number and associates it with the index inside of
    // <gameScores>
    void incScore(int);

    /*//displays the score of the player takes the index of the
    //paddle number and associates it with the index inside of
    // <gameScores>
    QString getScore(int);*/

    /*-------------------------*/



    // prints the current high scores and related game state
    // out to the highscore offshore text file,
    // returning a boolean value indicating print success
    bool printHSInfo(QString data);


    // reads the current high scores and related game state
    // from the highscore offshore text file,
    // returning a boolean value indicating read success;
    // if read succeeds, stores high scores and related game state in instance variables
    bool readHSInfo();

};

#endif // HIGHSCORES_H
