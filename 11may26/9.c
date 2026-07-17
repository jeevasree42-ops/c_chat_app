#include<stdio.h>
int main()
{
   int x=0,y=-1,z=1;
   int a=x++||y&& z++;
   printf("%d %d %d %d \n",x,y,z,a);
}

