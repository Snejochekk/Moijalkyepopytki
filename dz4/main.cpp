#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Поменять местами максимальный и последний отрицательный элементы массива M(40)

int main()
{
    constexpr int mass = 40;
    int M[mass];

    srand(time(nullptr));

    printf(": ");
    for(int i = 0; i < mass; ++i)
    {
        M[i] = rand() % 41 - 5;
        printf("%d ", M[i]);
    }

    printf("\n -------------------------------------------------------------------------------------------------------------\n");

    printf(": ");

    int maxel=M[0];//максимальный элемент
    int max_index=0;
    int otricel = M[0];
    int otricel_index = 0;

    for(int j = 0; j < mass; ++j)//найти макс эл и посл отриц.
    {
        if (M[j] > maxel){

            maxel = M[j];
            max_index=j;
        }

        if (M[j] < 0){
             otricel = M[j];
             otricel_index = j;
         }
     }

     M[max_index] = otricel;
     M[otricel_index] = maxel;

     for(int j = 0; j < mass; ++j)
     {
         printf("%d ", M[j] );
     }
     return 0;
}
