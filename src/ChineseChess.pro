QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = ../../bin/ChineseChess

TEMPLATE = app

SOURCES += main.cpp \
    ChesspieceView.cpp \
    ChessboardModel.cpp \
    ChesspieceModel.cpp \
    MainWidget.cpp \
    MainGraphicsView.cpp

DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    types.h \
    ChesspieceView.h \
    ChessboardModel.h \
    ChesspieceModel.h \
    MainWidget.h \
    MainGraphicsView.h \
    consts.h

RESOURCES += \
    pieces.qrc

