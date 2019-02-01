#-------------------------------------------------
#
# Project created by QtCreator 2018-10-23T14:13:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

MOC_DIR = ./tmp
RCC_DIR = ./tmp
UI_DIR = ./tmp
OBJECTS_DIR = ./tmp

Debug:DESTDIR= ../createLib/VisionGraph/bin/debug
Release:DESTDIR = ../createLib/VisionGraph/bin/release

Debug:LIBS += ./lib/debug/AVL.lib
Debug:LIBS += ./lib/debug/XVCreateRegion.lib
Debug:LIBS += ./lib/debug/XVCombineRegions.lib
#Debug:LIBS += ./lib/debug/VisionGraph.lib
Debug:LIBS += ../createLib/VisionGraph/bin/debug/VisionGraph.lib

Release:LIBS += ./lib/release/AVL.lib
Release:LIBS += ./lib/release/XVCreateRegion.lib
Release:LIBS += ./lib/release/XVCombineRegions.lib
#Release:LIBS += ./lib/release/VisionGraph.lib
Release:LIBS += ../createLib/VisionGraph/bin/release/VisionGraph.lib

INCLUDEPATH += ./include
INCLUDEPATH += ./include/VisionGraph/
#INCLUDEPATH += ./include/VisionGraph/VisionGraph
INCLUDEPATH += ../createLib/VisionGraph/VisionGraph/src


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h
