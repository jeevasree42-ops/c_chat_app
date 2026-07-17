#include<stdio.h>
int main()
{
   int i=5,x,j;
   while(i>=1)
   {
      x=1;
      while(x<=5-i)
      {
	 printf(" ");
	 x++;
      }
      j=1;
      while(j<=i)
      {
	 printf("*");
	 j++;
      }
      printf("\n");
      i--;
   }
}

