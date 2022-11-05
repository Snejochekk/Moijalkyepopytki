TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Board.cpp \
        Game.cpp \
        Helper.cpp \
        Menu.cpp \
        Politra.cpp \
        Screen_save.cpp \
        blocks.cpp \
        main.cpp

HEADERS += \
    Board.h \
    Game.h \
    GameState.h \
    Helper.h \
    Menu.h \
    Politra.h \
    Screen_save.h \
    blocks.h \





LIBS += -L$$PWD/../../lib_ncurses/PDCurses/wincon/ -lpdcurses

INCLUDEPATH += $$PWD/../../lib_ncurses/PDCurses
DEPENDPATH += $$PWD/../../lib_ncurses/PDCurses
