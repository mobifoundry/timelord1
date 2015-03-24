#-------------------------------------------------
#
# Project created by QtCreator 2013-10-29T17:11:17
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProfitRestClientExample
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h\

FORMS    += mainwindow.ui

include(../../RestClientLib/restclient.pri)

