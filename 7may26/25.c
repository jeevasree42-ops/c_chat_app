#include<stdio.h>
int main()
{
   int x=2,y=5;
   int a=x+10+(y--,y=1,y++,y);
   printf("%d %d %d\n",x,y,a);
}
























