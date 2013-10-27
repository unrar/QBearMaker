#-------------------------------------------------
#
# Project created by QtCreator 2013-10-24T12:46:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BearMaker
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        generators.cpp

HEADERS  += mainwindow.h\
            generators.h

FORMS    += mainwindow.ui
LIBS += -static-libgcc\
                 -static-libstdc++
