#include<stdio.h>
void fun(int);
int main()
{
   int x;
   scanf("%d",&x);
   fun(x);
}
void fun(int a)
{
   int x;
   x=a*a;
   printf("%d",x);
}




