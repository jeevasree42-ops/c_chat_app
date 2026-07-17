#include<stdio.h>
int main()
{
   int x,y,z;
   printf("Enter 3 numbers:");
   scanf("%d%d%d",&x,&y,&z);
   if (x>y&&x>z)
      printf("x is largest");
   else 
   {
      if(y>z)
	 printf("y is largest");
      else
	 printf("z is largest");
   }
}
      
