#include "Helper.h"
#include "Politra.h"

#include<curses.h>
#include <stdlib.h>

void PrintBorderMenu(size_t width, size_t height)
{
    for(int i = 0; i < width; ++i) {
        for(int j = 0; j < height; ++j) {
            move(j, i);
            if((i == 0 && j == 0) ||
               (i == 0 && j == height - 1) ||
               (i == width - 1 && j == 0) ||
               (i == width - 1 && j == height - 1))
            {
                addch(' ');
            } else if (j == 6 || j == height -8){
                addch('*');
            } else if (j == 5 || j == height -7){
                addch('*');
            } else if (i == 12 || i == width - 13) {
                addch('*');
            } else if (i == 10 || i == width - 11) {
                addch('*');
            } else {
                addch(' ');
            }
    }
}
}

void PrintBorderBoard(size_t width, size_t height)
{
    for(int i = 0; i < width; ++i) {
        for(int j = 0; j < height; ++j) {
            move(j, i);
            if((i == 0 && j == 0) ||
               (i == 0 && j == height - 1) ||
               (i == width - 1 && j == 0) ||
               (i == width - 1 && j == height - 1))
            {
                addch('*');
            } else if (j == 0 || j == height -1){
                addch('*');
            } else if (j == 0 || j == height -1){
                addch('*');
            } else if (i == 0 || i == width - 1) {
                addch('*');
            } else if (i == 0 || i == width - 1) {
                addch('*');
            } else {
                addch(' ');
            }
    }
}
}

void PrintBoardB(size_t offest_width, size_t width, size_t height)
{
    size_t newWidth = width + offest_width;
    for(size_t i = offest_width; i < newWidth; ++i) {
        for(size_t j = 0; j < height; ++j) {
            move(j, i);
            if ((i == 0 && j == 0) ||
                (i == 0 && j == height - 1) ||
                (i == newWidth - 1 && j == 0) ||
                (i == newWidth - 1 && j ==  height - 1))
            {
                addch('*');
            } else if (j == 0 || j == height - 1) {
                addch('*');
            } else if (i == 0 || i == newWidth - 1) {
                addch('*');
            } else {
                addch(' ');
            }
        }
    }
}


