#include "mtrx1.h"
#include "mtrx2.h"
#include <stdio.h>

int main ()
{
    constexpr int mtrx =7;
    int M[mtrx][mtrx];

    fillmtrx(reinterpret_cast<int*>(M),mtrx,mtrx);
    mtrx1(reinterpret_cast<int*>(M),mtrx,mtrx);


    int k;
    printf("\nstroka zameny: ");
    scanf("%d", &k);


    mtrx2(reinterpret_cast<int*>(M),mtrx,mtrx,k);


    mtrx3(reinterpret_cast<int*>(M),mtrx);
}
