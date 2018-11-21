#-------------------------------------------------
#
# Project created by QtCreator 2018-11-04T15:09:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hkChi
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
        main.cpp \
        mainwindow.cpp \
    game.cpp \
    fel_lib.c \
    fel.cpp \
    game.cpp \
    sntool.cpp \
    bootinfo.c \
    crc32.c \
    md5int.c \
    mkbootimg.c \
    progress.c \
    sha.c \
    sha256.c \
    soc_info.c \
    unpackbootimg.c
HEADERS += \
        mainwindow.h \
    game.h \
    fel.h \
    fel_lib.h \
    thunks/clrsetbits.h \
    thunks/fel-to-spl-thunk.h \
    thunks/memcpy.h \
    thunks/readl_writel.h \
    thunks/rmr-thunk.h \
    thunks/sid_read_root.h \
    android_filesystem_capability.h \
    android_filesystem_config.h \
    bootimg.h \
    common.h \
    crc32.h \
    game.h \
    game_meta_data.h \
    hash-internal.h \
    mainwindow.h \
    md5int.h \
    portable_endian.h \
    progress.h \
    sha.h \
    sha256.h \
    soc_info.h \
    types.h \
    version.h


FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

LIBS += -framework CoreData
LIBS += -framework CoreFoundation
LIBS += -framework IOKit

macx: LIBS += -L$$PWD/../build-libusb-Desktop_Qt_5_11_2_clang_64bit-Release/ -llibusb.1.0.0

INCLUDEPATH += $$PWD/../libusb/includes/
DEPENDPATH += $$PWD/../build-libusb-Desktop_Qt_5_11_2_clang_64bit-Release
