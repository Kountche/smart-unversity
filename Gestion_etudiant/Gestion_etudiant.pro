#-------------------------------------------------
#
# Project created by QtCreator 2018-11-01T14:26:51
#
#-------------------------------------------------
QT       += core gui sql widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gestion_etudiant
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
    connexion.cpp \
    espace_admin.cpp \
    tout_gestions.cpp \
    etudiant.cpp \
    enseignant.cpp \
    menu.cpp \
    groupe.cpp \
    module.cpp

HEADERS += \
        mainwindow.h \
    connexion.h \
    espace_admin.h \
    tout_gestions.h \
    etudiant.h \
    enseignant.h \
    menu.h \
    groupe.h \
    module.h

FORMS += \
        mainwindow.ui \
    espace_admin.ui \
    tout_gestions.ui \
    menu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
