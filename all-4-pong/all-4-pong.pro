#-------------------------------------------------
#
# Project created by QtCreator 2013-10-18T19:05:49
#
#-------------------------------------------------

QT       += core gui widgets network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = all-4-pong
TEMPLATE = app


SOURCES +=\
    Main.cpp \
    World.cpp \
    Objects.cpp \
    Ball.cpp \
    Paddle.cpp \
    Shapes.cpp \
    ingame.cpp \
    start.cpp \
    saveload.cpp \
    score.cpp \
    highscores.cpp \
    powerup.cpp

HEADERS  += \
    Shapes.h \
    Player.h \
    World.h \
    Objects.h \
    paddle.h \
    Ball.h \
    ingame.h \
    start.h \
    highscores.h \
<<<<<<< HEAD
    saveload.h\
=======
    saveload.h \
>>>>>>> a42c4fa3be0a97d4e83079b6fd3c589be9013e04
    score.h \
    powerup.h

FORMS    += \
    ingame.ui \
    start.ui

RESOURCES += \
    resources.qrc
