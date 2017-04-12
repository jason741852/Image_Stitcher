#-------------------------------------------------
#
# Project created by QtCreator 2017-04-11T20:22:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

LIBS += `pkg-config opencv --libs`

TARGET = ImageSticher
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
