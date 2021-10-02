QT       += testlib
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tst_calctest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS




SOURCES += \
        tst_calctest.cpp \
        ../src/Calc.cpp

HEADERS += \
        ../src/Calc.h

FORMS += \
        ../src/Calc.ui

DEFINES += SRCDIR=\\\"$$PWD/\\\"