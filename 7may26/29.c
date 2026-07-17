#include<stdio.h>
int main()
{
   int x=2,y=4;
   int a=x+y+10/2-(x++,y++,x+y);;
   printf("%d %d %d\n",x,y,a);
}


