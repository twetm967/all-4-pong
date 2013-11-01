#ifndef HIGHSCORES_H
#define HIGHSCORES_H

#include <QLabel>
#include <vector>
#include <QString>
#include <iostream>
#include <fstream>

using namespace std;

/*
 class HighScore
 {
 private:
 int score;
 string name;
 vector<

 public:
 Highscore(string initName, int, init Score){
 }

 };
 */


class HighScore
{
private:
 /*    vector<int> highScores;

    ofstream File; // File;

    vector<int> gameScores;

    QWidget* LeaderBoard;
*/
    HighScore(){}

    static HighScore instance;

public:

    static HighScore& getInstance(){
             return instance;
     }

    ~HighScore(){}

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

    //displays the score of the player takes the index of the
    //paddle number and associates it with the index inside of
    // <gameScores>
    QString getScore(int);


};

#endif // HIGHSCORES_H
