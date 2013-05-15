#-------------------------------------------------
#
# Project created by QtCreator 2013-05-14T15:12:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QRTS
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    utils/gameid.cpp \
    ui/view.cpp \
    ui/scene.cpp \
    game/command.cpp \
    game/commandfactory.cpp \
    game/commandwithposition.cpp \
    utils/point.cpp

HEADERS  += mainwindow.hpp \
    utils/gameid.hpp \
    ui/view.hpp \
    ui/scene.hpp \
    game/command.hpp \
    utils/noninstanciable.hpp \
    game/commandfactory.hpp \
    game/commandwithposition.hpp \
    utils/point.hpp
