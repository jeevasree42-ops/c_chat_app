#include<stdio.h>
int main()

{
   int x,y,z;
   printf("Enter x,y,z values:");
   scanf("%d %d %d",&x,&y,&z);
   if (x<y)
   {
      if(x<z)
	 printf("x is smalest value");
   }
   if (y<x)
   {
      if(y<z)
	 printf("y is smalest value");
   }
   if (z<x)
   {
      if(z<y)
	 printf("z is smalest value");
   }
}

