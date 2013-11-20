#-------------------------------------------------
#
# Project created by QtCreator 2013-10-23T20:34:16
#
#-------------------------------------------------

QT       += core gui widgets network
QMAKE_CXXFLAGS += -std=c++0x
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app


SOURCES += main.cpp\
        startup.cpp \
    clientingame.cpp

HEADERS  += startup.h \
    clientingame.h

FORMS    += startup.ui \
    clientingame.ui

RESOURCES += \
    Resources.qrc
