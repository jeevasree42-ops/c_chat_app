#include <stdio.h>
int main()
{
   int x=5,y=10,z=15,a=1,b,c,d;
   a=x+++y+++z+++a;;
   b=++x+y---a+z++;
   c=b+x+++y+++z---33;
   d=c+++b*2+a++;
   printf("%d %d %d %d %d %d %d\n",x,y,z,a,b,c,d); 
}



