#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Определить местоположение элементов массива А (30), не встречающихся в массиве В (15)

int main()
{
    constexpr int A = 30;
    int Mesto_A[A];
    constexpr int B = 15;
    int Mesto_B[B];
    int e=0;
    int j;

    srand(time(nullptr));

    printf(": ");
    for(int i = 0; i < A; ++i)
    {
        Mesto_A[i] = rand() % 31 - 5;
        printf("%d ", Mesto_A[i]);
    }

    srand(time(nullptr));

    printf("\n: ");
    for(int i = 0; i < B; ++i)
    {
        Mesto_B[i] = rand() % 2-2;
        printf("%d ", Mesto_B[i]);

    for(i=0;i< A;i++){

    for(j=0; j< B&& !i ;j++)if(Mesto_A[ i] == Mesto_B[ j])i++;
    if(!0)
    printf("\n A[%d] v B ne vstretilsya\n", i);

}
    return 0;
}
}
