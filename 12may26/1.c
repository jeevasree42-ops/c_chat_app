#include<stdio.h>
int main()
{
   int x=-1,y=0,z=2;
   int a=++x&&y++||z--;
   int b=x++||--y&&++z;
   int c=x--&&++y&&--z;
   int d=x++||y++&&(z=1);
   int e=++x&&y--||z;
   int f=--x&&y++||--z;
   printf("%d %d %d %d %d %d %d %d %d\n",x,y,z,a,b,c,d,e,f);
}
