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
    score.cpp \
    highscores.cpp

HEADERS  += \
    Shapes.h \
    Player.h \
    GameWindow.h \
    World.h \
    Objects.h \
    paddle.h \
    Ball.h \
    ingame.h \
    start.h \
    score.h \
    highscores.h

FORMS    += \
    ingame.ui \
    start.ui
