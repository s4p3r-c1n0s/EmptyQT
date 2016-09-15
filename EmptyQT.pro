TEMPLATE = app
TARGET = EmptyQT

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    emptyqtsrc.cpp \
    window.cpp

HEADERS += \
    window.h
