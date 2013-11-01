#ifndef TIMER_H
#define TIMER_H
#include <qtimer.h>


class Timer
{
    QTimer *runTimer;
    Timer();

private:
    static Timer *instance;

public:
    //Public getter of the only instance of this class
    static Timer* getInstance();

    //Provides access to the QTimer
    QTimer* getTimer() {return runTimer;}

    ~Timer();
};

extern Timer timer;

#endif // TIMER_H
