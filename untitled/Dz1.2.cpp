#include <stdio.h>

int main()
/*подсмотрела у другого участника, ввела чтобы понять что происходит,
 заменила "d" на "j", думала ворнинг изза зарезервированной "d",
 но ошибка все равно осталась..*/
{
    int a=5;
    int c=5;
    int b;

    int j;

    printf("output b=");
    scanf("%d", &b);
    printf("a=a+b-2\n");
    a=a+b-2;
    printf("a=%.2d\n",a);
    printf("b=%.2d\n",b);

    printf("c=%.2d\n",c);
    c=c+1;
    printf("c=c+1\n");
    printf("c=%.2d\n",c);

    printf("input j=");
    scanf("%d", &j);
    j=c-a+j;
    printf("j=c-a+j\n",j);
    printf("j=%.2d\n",j);

    printf("a=a*c\n");
    a=a*c;
    printf("a=%.2d\n",a);

    printf("c=c-1\n");
    c=c-1;
    printf("c=%.2d\n",c);

    printf("a=a/10\n");
    a=a/10;
    printf("a=%.2d\n",a);

    printf("c=c/2\n");
    c=c/2;
    printf("c=%.2d\n",c);

    printf("b=b-1\n");
    b=b-1;
    printf("b=%.2d\n",b);


    return 0;
}
