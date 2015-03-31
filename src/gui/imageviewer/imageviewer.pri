QT += core widgets
qtHaveModule(printsupport): QT += printsupport


INCLUDEPATH += $$PWD


HEADERS     = \
    $$PWD/imageviewercontroler.h \
    $$PWD/animationcontroler.h \
    $$PWD/imageviewer.h
SOURCES     =  \
    $$PWD/imageviewercontroler.cpp \
    $$PWD/animationcontroler.cpp \
    $$PWD/imageviewer.cpp

FORMS += \
    $$PWD/imageviewercontroler.ui \
    $$PWD/animationcontroler.ui

RESOURCES += \
    $$PWD/resource.qrc

DEFINES += IMAGEVIEWER_LIBRARY_EXPORT

