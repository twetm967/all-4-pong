#-------------------------------------------------
#
# Project created by QtCreator 2013-10-23T20:34:16
#
#-------------------------------------------------

QT       += core gui widgets network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app


SOURCES += main.cpp\
        startup.cpp \
    clientgame.cpp

HEADERS  += startup.h \
    clientgame.h

FORMS    += startup.ui \
    clientgame.ui
