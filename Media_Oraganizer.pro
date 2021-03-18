#-------------------------------------------------
#
# Project created by QtCreator 2016-09-14T17:00:15
#
#-------------------------------------------------

QT       += core gui concurrent


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Media_Oraganizer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    contentid.cpp

HEADERS  += mainwindow.h \
        contentid.h \
    funtions.h

FORMS    += mainwindow.ui

RESOURCES += \
    stylesheet_resource.qrc

RC_FILE = myapp.rc
