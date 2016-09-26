TEMPLATE = lib
TARGET = EmptyQT
CONFIG += staticlib

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    emptyqtsrc.cpp \
        cmainwindow.cpp \
        mainwindow.cpp \
    thumbnildialog.cpp \
    stackeddialog.cpp \
    fullviewdlg.cpp \
    window.cpp

HEADERS  += mainwindow.h \
        cmainwindow.h \
    thumbnildialog.h \
    stackeddialog.h \
    fullviewdlg.h \
    window.h
