#-------------------------------------------------
#
# Project created by QtCreator 2017-07-15T19:12:06
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoMemoria
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tarjeta.cpp \
    memoria.cpp \
    memoriaaritmetica.cpp \
    pareja.cpp \
    memoriatraduccion.cpp \
    memoriasonidos.cpp

HEADERS  += mainwindow.h \
    tarjeta.h \
    memoria.h \
    memoriaaritmetica.h \
    pareja.h \
    memoriatraduccion.h \
    memoriasonidos.h

FORMS    += mainwindow.ui \
    memoriaaritmetica.ui \
    memoriatraduccion.ui \
    memoriasonidos.ui

RESOURCES += \
    imagenes.qrc

CONFIG += c++11
