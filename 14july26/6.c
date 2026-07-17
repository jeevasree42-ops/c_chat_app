#include<stdio.h>
int fun(void);
int main()
{
   int x;
   x=fun();
   printf("x: %d",x);
}
int fun()
{
   int a,x;
   scanf("%d",&a);
   x=a*a;
   return x;
}

