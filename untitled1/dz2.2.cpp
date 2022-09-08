#include <math.h>
#include <stdio.h>

//Вычислить наибольшую площадь

int main()
{
   double pl;
   double Pl;
   double r=(30*30);//радиус=30
   double b=M_PI;
   double s1;//площадь

   printf("S kruga\n");
   printf("radius r=12\n");
   printf("s1=(b*r)\n");
   s1=b*r;
   scanf("%lf\n",&s1);
   printf("result %lf\n",s1);
   printf("--------------------\n");

   double a=15;
   double c=15;
   double d=15;
   double p;//полупериметр треугольника
   double s2;//площадь

   printf("S treugol'nika\n");
   printf("dlinna ravnostoronnego treugla a=15\n");
   printf("p=(a+c+d)/2\n");
   p=(a+c+d)/2;
   scanf("%lf\n",&p);
   printf("result p=%lf\n",p);//результат полупериметра
   printf("s2=sqrt(p(p-a)(p-c)(p-d))\n");//формула вычисления равностороннего треугольника
   s2=sqrt(p*(p-a)*(p-c)*(p-d));
   scanf("%lf\n", &s2);
   printf("result s2=%lf\n",s2);

   printf("---------------------\n");

   double d1=12;//сторона квадрата
   double s3;//площадь

   printf("S kvadrata\n");
   printf("s3=d1*4\n");
   s3=d1*4;
   scanf("%lf\n",&s3);
   printf("result s3=%lf\n",s3);
   pl=s1>s2?s1:s2;
   Pl=pl>s3?pl:s3;
   printf("---------------------\n");
   printf("Naibol'shaya S=%lf\n",Pl);

    return 0;
}
