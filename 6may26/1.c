#include<stdio.h>
int main()
{
   int x=1,y=3,z=6,a=2,b,c,d,e;
   a=++a+x+++y--+z;
   b=--x+y+++z+a;
   c=x+++y+++z--;
   d=++x+--y-z++;
   e=--x+y+++z+++a;
   printf("%d %d %d %d %d %d %d %d\n",x,y,z,a,b,c,d,e);
}

