#include "score.h"

#include <vector>

// increase currentScore by currentLevelIncrease and
// returns the updated currentScore
int Score::increaseScore() {
    currentScore = currentScore + currentLevelIncrease;
    return currentScore;
}

// decrease currentScore by currentLevelDecrease and
// returns the updated currentScore
int Score::decreaseScore() {
    currentScore = currentScore - currentLevelDecrease;
    return currentScore;
}
