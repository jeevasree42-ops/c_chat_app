#include<stdio.h>
int main()
{
   int x=2,y=5;
   int a=x+y+(x++,y--,x=2,++x);
   printf("%d %d %d\n",x,y,a);
}























