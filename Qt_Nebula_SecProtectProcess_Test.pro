QT += core
QT -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += concurrent

CONFIG += c++11

TARGET = Qt_Nebula_SecProtectProcess_Test
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    testing/testing_concurrent.h \
    testing/testing.h

SOURCES += \
    main.cpp \
    testing/testing_concurrent.cpp \
    testing/testing.cpp


COMPILE_DIRECTORY = ../compileDir
MOC_DIR = $$COMPILE_DIRECTORY/secProtectProcess_Test_Build
OBJECTS_DIR = $$COMPILE_DIRECTORY/secProtectProcess_Test_Build
DESTDIR = $$COMPILE_DIRECTORY//bin

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
