#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "blocks.h"
#include "GameState.h"
#include "Menu.h"
#include "Screen_save.h"

struct Game

{
    GameState state;
    GameSize gameSize;
    Board* board;
    Menu* menu;
    Screen_save* screen_save;
    Blocks* blocks;

    int score;

};


Game* CreateGame();
void DestroyGame(Game* game);
void RunGame(Game* game);

#endif // GAME_H
