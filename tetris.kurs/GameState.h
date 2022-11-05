#ifndef GAMESTATE_H
#define GAMESTATE_H

enum GameState
{
    SCREEN_SAVE,
    MENU,
    BOARD,
    EXIT
};

struct GameSize
{
    int width;
    int height;
};

#endif // GAMESTATE_H
