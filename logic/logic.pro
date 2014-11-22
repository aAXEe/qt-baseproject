#-------------------------------------------------
#
# Project created by QtCreator 2014-11-22T17:53:33
#
#-------------------------------------------------

QT       -= gui

TARGET = logic
TEMPLATE = lib
CONFIG += staticlib

SOURCES += logic.cpp

HEADERS += logic.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
