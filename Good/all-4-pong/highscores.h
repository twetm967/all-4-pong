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

    QString firstHSPlayerName;
    QString secondHSPlayerName;
    QString thirdHSPlayerName;

    bool print;

    HighScore(){
        importData();
    }

    static HighScore* instance;

public:

    static HighScore* getInstance(){
        if (instance == NULL){
            instance = new HighScore;
        }
        return instance;
     }

    QString getFirstHSPlayerName() {return firstHSPlayerName;}
    QString getSecondHSPlayerName() {return secondHSPlayerName;}
    QString getThirdHSPlayerName() {return thirdHSPlayerName;}
    int getFirstHighestScore() {return firstHighestScore;}
    int getSecondHighestScore() {return secondHighestScore;}
    int getThirdHighestScore() {return thirdHighestScore;}
    bool getBool(){return print;}

    ~HighScore(){}

    // if <score> qualifies, adds <score> and
    void addScore(QString username, int score);

    void importData();

    string printData();

    void exportData();

};

#endif // HIGHSCORES_H
