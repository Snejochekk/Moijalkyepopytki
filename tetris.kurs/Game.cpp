#include "Game.h"
#include "Politra.h"
#include "Screen_save.h"

#include <curses.h>

void PrintGameSubModules(Game* game)
{
    if (!game) {
        return;
    }

    switch (game->state) {
    case MENU:
        PrintMenu(game->menu);
        break;
    case BOARD:
        PrintBoard(game->board);
        PrintBlocks(game->blocks);
        break;
    case EXIT:
        return;
    case SCREEN_SAVE:
        PrintScreen_save(game->screen_save);
        break;
    }
}

GameState RunGameSubModules(Game* game)
{
    if (!game) {
        return SCREEN_SAVE;
    }

    int ch = getch();

    switch (game->state) {
    case SCREEN_SAVE:
        Screen_save::Screen_saveKey screen_saveKey;
        switch (ch)
        {
        case 10:
            screen_saveKey = Screen_save::ENTER;
            break;
        default:
            return game->state;
        }
    return RunScreen_save(game->screen_save, screen_saveKey);
    case MENU:
        Menu::MenuKey menuKey;
        switch(ch)
        {
        case KEY_UP:
            menuKey = Menu::UP;
            break;
        case KEY_DOWN:
            menuKey = Menu::DOWN;
            break;
        case 10:
            menuKey = Menu::ENTER;
            break;
        default:
            return game->state;
        }
        return RunMenu(game->menu, menuKey);
    case BOARD:
        Board::BoardKey boardKey;
        switch(ch)
        {
    case KEY_DOWN:
        boardKey = Board::DOWN;
        break;
    case KEY_LEFT:
        boardKey = Board::LEFT;
            break;
    case KEY_RIGHT:
        boardKey = Board:: RIGHT;
           break;
    case 27:
        boardKey = Board::ESC;
        break;
    default:
        return game->state;
    }
    case 27:
        return RunBoard(game->board, boardKey);

        return RunBlocks(game->blocks,Blocks::DOWN);
    case -1:
        return RunBlocks(game->blocks,game->blocks->direction);
    case EXIT:
        return game->state;
    }
    return game->state;
}

Game* CreateGame()
{
    initscr(); //Инициализация библиотеки
    keypad(stdscr, TRUE); // включить работу с непечатными символами (стрелками)
   // cbreak();
   // noecho();
    curs_set(0); // Убрать мигающий курсор
   // refresh();

    InitPolitra();



    Game* game = new Game;
    game->state = SCREEN_SAVE;
    game->gameSize = {70,20};
    game->board = CreateBoard(game->gameSize);
    game->menu = CreateMenu(game->gameSize);
    game->screen_save = CreateScreen_save(game->gameSize);
    game->blocks = CreateBlocks(game->gameSize);
    return game;
}

void DestroyGame(Game* game)
{
    if (!game) {
        return;
    }

    DestroyBlocks(game->blocks);
    DestroyMenu(game->menu);
    DestroyBoard(game->board);
    delete game;
    endwin();
}


void RunGame(Game* game)
{
    while(game->state != EXIT) {

PrintGameSubModules(game);


        game->state = RunGameSubModules(game);
    }
}

