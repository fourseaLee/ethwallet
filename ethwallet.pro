#-------------------------------------------------
#
# Project created by QtCreator 2020-08-03T14:17:32
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ethwallet
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        coinview.cpp \
        main.cpp \
        mainwindow.cpp \
        walletdb.cpp

HEADERS += \
        coinview.h \
        mainwindow.h \
        walletdb.h

FORMS += \
        coinview.ui \
        mainwindow.ui


DISTFILES += \
    ethwalletweb3.py



win32: LIBS += -L'C:/Program Files/Python36/libs/' -lpython36

INCLUDEPATH += 'C:/Program Files/Python36/include'
DEPENDPATH += 'C:/Program Files/Python36/include'

win32:!win32-g++: PRE_TARGETDEPS += 'C:/Program Files/Python36/libs/python36.lib'
else:win32-g++: PRE_TARGETDEPS += 'C:/Program Files/Python36/libs/libpython36.a'
