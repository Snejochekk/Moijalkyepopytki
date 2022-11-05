#include "blocks.h"
#include "Politra.h"

#include <curses.h>

Blocks* CreateBlocks(GameSize gameSize)
{
    Blocks* blocks = new Blocks;
    blocks->gameSize = gameSize;
    blocks->blockSize = 5;
    blocks->body[4] = {1,1};
    blocks->body[3] = {2,1};
    blocks->body[2] = {3,1};
    blocks->body[1] = {4,1};
    blocks->body[0] = {5,1};
    blocks->direction = Blocks::DOWN;
    return blocks;
}

void DestroyBlocks(Blocks* blocks)
{
    delete blocks;
};

void PrintBlocks(Blocks* blocks)
{
    if (!blocks) {
        return;
    }

    attron(COLOR_PAIR(BLOCKS_POL));
    for(int i = 0; i<blocks->blockSize; ++i) {
        move(blocks->body[i].y,blocks->body[i].x);
        addch('O');
    }
};

GameState RunBlocks(Blocks* blocks, Blocks::Direction direction)
{
    if(!blocks) {
        return GameState::BOARD;
    }
    blocks->direction = direction;
        if(!MoveBlocks(blocks))
    {
            return GameState::EXIT;
    }

    return GameState::BOARD;
}



bool MoveBlocks(Blocks* blocks)
{
    if (!blocks)
       {
           return false;
       }


    /*for (int i = 0; i + 1 < pearson -> PearsonSize; ++i)
    {
        pearson[i + 1] = pearson[i];
    }*/

    switch (blocks -> direction)
    {
        case Blocks::UP:
        if (blocks->body[0].y > 1)
        {
        --blocks->body[0].y;
        } else {
            blocks->direction = Blocks::DOWN;
        }
        break;
    case Blocks::DOWN:
        if (blocks->body[0].y <= 17)
        {
        ++blocks->body[0].y;
        } else {
            blocks->direction = Blocks::STAY;
        }
        break;
    default:
        break;
    }
   return true;
}




