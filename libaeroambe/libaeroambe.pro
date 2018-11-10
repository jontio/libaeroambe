#-------------------------------------------------
#
# Project created by QtCreator 2018-10-15T09:43:59
#
#-------------------------------------------------

TEMPLATE = lib

TARGET = aeroambe

QT       += core

CONFIG += c++11

DEFINES += EXPORTLIB

MBELIB_PATH = $$PWD/../mbelib-master

INCLUDEPATH += $$MBELIB_PATH
DEPENDPATH += $$MBELIB_PATH
VPATH += $$MBELIB_PATH

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    aeroambe.cpp

HEADERS  += \
    aeroambe.h

win32: LIBS += -L$$MBELIB_PATH/build/ -llibmbe.dll
linux: LIBS += -lmbe

DISTFILES += \
    LICENSE \
    README.md \
    ../mbelib-master/COPYRIGHT \
    ../README.md
    ../mbelib-master/README.md
    
#define where we store everything so when using the command line we don't make the main directory messy.
CONFIG(debug, debug|release) {
    DESTDIR = $$PWD/debug
    OBJECTS_DIR = $$PWD/tmp/debug/obj
    MOC_DIR = $$PWD/tmp/debug/moc
} else {
    DESTDIR = $$PWD/release
    OBJECTS_DIR = $$PWD/tmp/release/obj
    MOC_DIR = $$PWD/tmp/release/moc
}

#install headers
headersDataFiles.path = $$[QT_INSTALL_HEADERS]/libaeroambe/
headersDataFiles.files = $$PWD/*.h
INSTALLS += headersDataFiles

#install library
target.path=$$[QT_INSTALL_LIBS]
INSTALLS += target



