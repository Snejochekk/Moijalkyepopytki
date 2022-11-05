#include "Board.h"
#include "blocks.h"
#include "Helper.h"
#include "Politra.h"
#include "Screen_save.h"

#include <curses.h>

Board* CreateBoard(GameSize gameSize)
{
    const int scoreWidth = 20;

    Board* board = new Board;
    board->gameSize = gameSize;
    board->blockSize = {gameSize.width - scoreWidth, gameSize.height};
    board->scoreSize = {scoreWidth, gameSize.height};

    return board;

}

void DestroyBoard(Board* board)
{
    delete board;
}


void PrintBoard(Board* board)
{
    if (!board) {
        return;
    }

    attron(COLOR_PAIR(BOARD_POL));
    for(int i = 0; i < board->gameSize.width; ++i) {
        for(int j = 0; j < board->gameSize.height; ++j) {
            move(j, i);
            addch(' ');
         }
    }

PrintBorderBoard(board->gameSize.width, board->gameSize.height);

PrintBoardB(0, board->blockSize.width, board->blockSize.height);

PrintBoardB(board->blockSize.width, board->scoreSize.width, board->scoreSize.height);

mvprintw(
       1,
       board->blockSize.width + 1,
       "score: %d", scrl);

}


GameState RunBoard(Board* board, Board::BoardKey key)
{
    (void) board;

    switch (key) {
    case Board::ESC:
        return MENU;
    }
    return BOARD;
}

