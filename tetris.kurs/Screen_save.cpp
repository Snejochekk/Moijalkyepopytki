#include "Menu.h"
#include "Politra.h"
#include "Screen_save.h"

#include <curses.h>
#include <string.h>
#include <stdio.h>

Screen_save* CreateScreen_save(GameSize gameSize)
{
    Screen_save* screen_save = new Screen_save;
    screen_save->gameSize = gameSize;
    screen_save->screen_saveStrings[Screen_save::HELLO_DUDE] = "HELLO DUDE";
    screen_save->screen_saveStrings[Screen_save::LETS_PLAY_TETRIS] = "LETS PLAY TETRIS";
    screen_save->currentPoint = Screen_save::HELLO_DUDE;
    return screen_save;
}

void DestroyScreen_save(Screen_save* screen_save)
{
    delete screen_save;
}

void Picture()
{
    initscr();
    keypad(stdscr, TRUE);
    curs_set(0);
    noecho();

    for(int i = 0; i < 20; ++i)
    {
        for(int j = 0; j < 70; ++j)
        {
            move(i,j);
            attron(COLOR_PAIR(SCREEN_SAVE_POL));
            chtype ch;
            addch(ch);
            mvprintw(8,8, "            <<...                 ...>>                 ");
            mvprintw(9,8, "               ****\\          //****                  ");
            mvprintw(10,8, "             \\ ***               *** //                 ");
            mvprintw(11,8, "              //   \\           //   \\               ");
            mvprintw(12,8, "             //( $ )\\   |  |  //( $ )\\              ");
            mvprintw(13,8, "             \\     //   |  |  \\     //              ");
            mvprintw(14,8, "               //***    /         ***\\                 ");
            mvprintw(15,8, "                       ( @  @ )                    ");
            mvprintw(16,8, "                                                    ");
        }
    }

    mvprintw(20,70, "PRESS ENTER");
}

void PrintScreen_save(Screen_save* screen_save)
{
    if (!screen_save) {
        return;
    }

    attron(COLOR_PAIR(SCREEN_SAVE_POL));

    for(int i = 0; i < screen_save->gameSize.width; ++i) {
        for(int j = 0; j < screen_save->gameSize.height; ++j) {
            move(j, i);

            addch(' ');
        }
    }
    for (int i = 0; i < Screen_save::COUNT; ++i) {
        mvprintw
            (screen_save ->gameSize.height / 2.5 +i,
            (screen_save ->gameSize.width - strlen(screen_save ->screen_saveStrings[i])) / 2,
             "%s", screen_save ->screen_saveStrings[i]);

        for (int i = 0; i < Screen_save::COUNT; ++i) {
}

    attroff(COLOR_PAIR(SCREEN_SAVE_POL));
}
}

GameState RunScreen_save(Screen_save*, Screen_save::Screen_saveKey key)
{
    if(key == Screen_save::ENTER)
        return MENU;
    return SCREEN_SAVE;
}

