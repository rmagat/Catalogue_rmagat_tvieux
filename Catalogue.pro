#-------------------------------------------------
#
# Project created by QtCreator 2015-09-11T13:43:26
#
#-------------------------------------------------

QT       += core gui\
QT       += sql\
QT       += printsupport\

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Catalogue
TEMPLATE = app


SOURCES += main.cpp\
        pdf.cpp\
    connexion.cpp

HEADERS  += pdf.h\
    connexion.h
