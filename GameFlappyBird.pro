TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += C:/SFML-2.5.1/include
LIBS += -LC:/SFML-2.5.1/lib \
        -lsfml-graphics \
        -lsfml-window \
        -lsfml-system

SOURCES += \
        Bird.cpp \
        Game.cpp \
        Pipe.cpp \
        ScoreManager.cpp \
        main.cpp

HEADERS += \
    Bird.h \
    Game.h \
    GameObject.h \
    Pipe.h \
    ScoreManager.h
