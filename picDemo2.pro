#-------------------------------------------------
#
# Project created by QtCreator 2017-12-06T17:25:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = picDemo2
TEMPLATE = app


SOURCES += main.cpp\
        basewidget.cpp \
    screenutils.cpp \
    menuwidget.cpp \
    pictureview.cpp \
    kinectimpl.cpp \
    pictureutils.cpp \
    widget.cpp

HEADERS  += basewidget.h \
    screenutils.h \
    menuwidget.h \
    pictureview.h \
    kinectimpl.h \
    pictureutils.h \
    widget.h


LIBS += "F:\ProgramDesign\VS2013\KinectGestureRecognition\x64\Debug\KinectGestureRecognition.lib"
LIBS += "C:\Program Files\Microsoft SDKs\Kinect\v2.0_1409\Lib\x64\Kinect20.lib"
#LIBS += -L "C:\OpenCV\opencv\build\x64\vc12\lib"

DEPENDPATH +="C:\OpenCV\opencv\build\x64\vc12\lib"

INCLUDEPATH += "F:\ProgramDesign\VS2013\KinectGestureRecognition\KinectGestureRecognition"
INCLUDEPATH += "C:\OpenCV\opencv\build\include"
INCLUDEPATH += "C:\Program Files\Microsoft SDKs\Kinect\v2.0_1409\inc"
