TEMPLATE = app
TARGET = EmptyQT
#CONFIG += staticlib

QT       += core gui printsupport
QT += widgets

SOURCES += \
    emptyqtsrc.cpp \
        cmainwindow.cpp \
        mainwindow.cpp \
    thumbnildialog.cpp \
    stackeddialog.cpp \
    fullviewdlg.cpp \
    window.cpp \
    imageviewlistener.cpp

HEADERS  += mainwindow.h \
        cmainwindow.h \
    thumbnildialog.h \
    stackeddialog.h \
    fullviewdlg.h \
    window.h \
    imageviewlistener.h
