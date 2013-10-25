#ifndef HIGHSCORES_H
#define HIGHSCORES_H

#include <QLabel>
#include <vector>
class HighScores
{
private:
    vector<int> highScores;

    vector<int> gameScores;

    QWidget LeaderBoard;

public:
    HighScores();

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
    QWidget getLeaderBoard();


    void incScore();

};

#endif // HIGHSCORES_H
