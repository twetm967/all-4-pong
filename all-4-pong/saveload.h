#ifndef SAVELOAD_H
#define SAVELOAD_H

class SaveLoad
{
    // a file stream object instance variable
    int topScore1;
    int topScore2;
    int topScore3;
    string topPlayer1;
    string topPlayer2;
    string topPlayer3;

public:

    // opens the text file holding official game state
    // returns boolean indicator of sucesss
    bool openFile();

    // writes appropriate game state of <currentGameWorld> to official game text file
    // returns boolean indicator of sucesss
    bool saveGameState(World *currentGameWorld);

    // loads game state from official game text file into <currentGameWorld>
    // returns boolean indicator of sucesss
    bool loadGameState(World *currentGameWorld);

    // closes the text file holding official game state
    // returns boolean indicator of sucesss
    bool closeFile();

};

#endif // SAVELOAD_H
