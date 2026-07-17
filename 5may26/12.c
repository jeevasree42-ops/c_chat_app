#include <stdio.h>
int main()
{
   int x=1,y=3,z=6,a=2,b,c,d,e;
   a=++x+y+++z+a--;
   b=x+++y+++z++;
   c=--x+y+++z++;
   d=a+++x++-z--;
   e=x---y+++z--;
   printf("%d %d %d %d %d %d %d %d\n",x,y,z,a,b,c,d,e); 
}










