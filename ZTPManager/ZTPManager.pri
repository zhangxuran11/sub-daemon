INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD
QT += network
HEADERS += \
    ZTPManager/ztpmanager.h \
    ZTPManager/ztpprotocol.h \
    ZTPManager/fragment.h

SOURCES += \
    ZTPManager/ztpmanager.cpp \
    ZTPManager/ztpprotocol.cpp \
    ZTPManager/fragment.cpp
