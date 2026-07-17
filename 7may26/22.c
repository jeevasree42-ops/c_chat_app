#include<stdio.h>
int main()
{
   int x=2,y=5;
   int a=x+++y+5+(x++,y++,x+y);
   printf("%d %d %d\n",x,y,a);
}





















