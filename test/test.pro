QT       += testlib

TARGET = tst_testtest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS




SOURCES += \
        tst_testtest.cpp 

DEFINES += SRCDIR=\\\"$$PWD/\\\"