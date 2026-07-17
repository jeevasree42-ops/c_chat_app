#include<stdio.h>
int main()

{
   int x,y,z;
   printf("Enter x,y,z values:");
   scanf("%d %d %d",&x,&y,&z);
   if (x>y)
   {
      if(x>z)
	 printf("x is largest value");
   }
   if (y>x)
   {
      if(y>z)
	 printf("y is largest value");
   }
   if (z>x)
   {
      if(z>y)
	 printf("z is largest value");
   }
}


