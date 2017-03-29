#-------------------------------------------------
#
# Project created by QtCreator 2016-10-12T15:52:24
#
#-------------------------------------------------

QT       += core gui
QT += serialport
#CONFIG +=debug

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

TARGET = my_project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h

FORMS    += mainwindow.ui

## фишки от Андрея, копирует dll в папки релиза и дебага)=
#copy_to_build.files += $$PWD/TesterArinc_DLL_W2K.dll
#win32:CONFIG(release, debug|release): copy_to_build.path += $$OUT_PWD/release
#else:win32:CONFIG(debug, debug|release): copy_to_build.path += $$OUT_PWD/debug


INSTALLS += copy_to_build

RESOURCES += \
    my_project.rc

 RC_FILE = my_project.rc

DISTFILES += \
    2_40.png \
    imageformats/qdds.dll \
    imageformats/qgif.dll \
    imageformats/qicns.dll \
    imageformats/qico.dll \
    imageformats/qjp2.dll \
    imageformats/qjpeg.dll \
    imageformats/qmng.dll \
    imageformats/qsvg.dll \
    imageformats/qtga.dll \
    imageformats/qtiff.dll \
    imageformats/qwbmp.dll \
    imageformats/qwebp.dll



