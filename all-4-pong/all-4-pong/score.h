#ifndef SCORE_H
#define SCORE_H


#include <vector>


//will keep track of individual score for a player
class Score
{

private:
    int currentScore;
    int currentLevelIncrease;
    int currentLevelDecrease;

public:

    Score(): currentScore(0), currentLevelIncrease(100), currentLevelDecrease(50) { }

    Score(int score, int increaseAmount, int decreaseAmount):
        currentScore(score), currentLevelIncrease(increaseAmount), currentLevelDecrease(decreaseAmount) { }
    // int incScore();

    // increase currentScore by currentLevelIncrease and
    // returns the updated currentScore
    void increaseScore();

    // decrease currentScore by currentLevelDecrease and
    // returns the updated currentScore
    void decreaseScore();

    /* ------- getter methods ------- */
    int getCurrentScore() { return currentScore; }
    int getCurrentLevelIncrease() { return currentLevelIncrease; }
    int getCurrentLevelDecrease() { return currentLevelDecrease; }

    /* ------- setter methods ------- */
    void setCurrentScore(int score) { currentScore = score; }
    void setCurrentLevelIncrease(int increaseAmount) { currentLevelIncrease = increaseAmount; }
    void setCurrentLevelDecrease(int decreaseAmount) { currentLevelDecrease = decreaseAmount; }

};

#endif // SCORE_H
