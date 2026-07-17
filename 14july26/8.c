#include<stdio.h>
int fun(int);
int main()
{
   int x;
   scanf("%d",&x);
   x=fun(x);
   printf("x: %d",x);
}
int fun(int a)
{
   return (a*a);
}



