#-------------------------------------------------
#
# Project created by QtCreator 2013-10-18T18:58:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = all-4-pong
TEMPLATE = app


SOURCES += main.cpp\
        game.cpp

HEADERS  += game.h \
    ../Shapes.h \
    ../Player.h \
    ../Map.h \
    ../Game.h \
    ../Ball.h

FORMS    += game.ui
