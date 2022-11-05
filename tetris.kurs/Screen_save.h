#ifndef SCREEN_SAVE_H
#define SCREEN_SAVE_H

#include "GameState.h"

struct Screen_save
{
    enum Screen_saveKey
    {
        ENTER,
        EXIT
    };

    enum Screen_savePoint
    {
        HELLO_DUDE,
        LETS_PLAY_TETRIS,
        COUNT,
        FIRST_POINT = HELLO_DUDE,
        LAST_POINT = LETS_PLAY_TETRIS
    };

    const char* screen_saveStrings[COUNT];
    int currentPoint;
    GameSize gameSize;
};

Screen_save* CreateScreen_save(GameSize gameSize);
void DestroyScreen_save(Screen_save* screen_save);
void PrintScreen_save(Screen_save* screen_save);
GameState RunScreen_save(Screen_save* screen_save, Screen_save::Screen_saveKey key);

#endif // SCREEN_SAVE_H
