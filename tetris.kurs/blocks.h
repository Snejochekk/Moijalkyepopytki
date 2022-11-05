#ifndef BLOCKS_H
#define BLOCKS_H

#include "GameState.h"
#include "Helper.h"

struct Blocks {
    struct Point
    {
        int x;
        int y;
    };

    enum Direction {
        UP,
        DOWN,
        LEFT,
        RIGHT,
        STAY
    };


    Point body[255];
    int blockSize;
    Direction direction;
    GameSize gameSize;
};

Blocks* CreateBlocks(GameSize gameSize);
void DestroyBlocks(Blocks* blocks);
void PrintBlocks(Blocks* blocks);
bool MoveBlocks(Blocks* blocks);

GameState RunBlocks(Blocks* blocks, Blocks::Direction direction);

#endif // BLOCKS_H
