QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = ../../bin/ChineseChess

TEMPLATE = app

SOURCES += main.cpp \
    Widget.cpp \
    MyGraphicsView.cpp \
    ChesspieceView.cpp \
    ChessboardModel.cpp \
    ChesspieceModel.cpp

DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    Widget.h \
    MyGraphicsView.h \
    types.h \
    ChesspieceView.h \
    ChessboardModel.h \
    ChesspieceModel.h

RESOURCES += \
    pieces.qrc

