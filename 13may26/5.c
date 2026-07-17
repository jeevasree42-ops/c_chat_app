#include<stdio.h>
int main()
{
   int x=0,y=0,z=-1;
   int a=x++&&y++||z++;
   int b=--x||y++&&--z;
   int c=x--&&--y||z--;
   int d=x<y||y--&&++z;
   int e=x++&&--y&&z;
   int f=(x=1)||x++&&++z;
   int g=x++&&y++||++z;
   printf("%d %d %d %d %d %d %d %d %d %d\n",x,y,z,a,b,c,d,e,f,g);
}




