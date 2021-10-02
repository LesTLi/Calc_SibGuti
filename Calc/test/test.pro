QT       += testlib

TARGET = tst_calctest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS




SOURCES += \
        tst_calctest.cpp 

DEFINES += SRCDIR=\\\"$$PWD/\\\"