#include "Politra.h"

#include <curses.h>

void InitPolitra()
{
    start_color(); //Включить работу с цветами
    init_pair(BOARD_POL, COLOR_BLACK, COLOR_RED);
    init_pair(MENU_POL, COLOR_BLACK, COLOR_WHITE);
    init_pair(SCREEN_SAVE_POL, COLOR_RED, COLOR_BLACK);
    init_pair(BLOCKS_POL,COLOR_GREEN, COLOR_GREEN);
}
