#-------------------------------------------------
#
# Project created by QtCreator 2013-10-18T19:05:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = all-4-pong
TEMPLATE = app


SOURCES +=\
    GameWindow.cpp \
    Main.cpp \
    ball.cpp \
    World.cpp

HEADERS  += \
    Shapes.h \
    Player.h \
    Map.h \
    GameWindow.h \
    ball.h \
    World.h

FORMS    += game.ui
