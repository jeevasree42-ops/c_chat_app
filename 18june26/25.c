#include<stdio.h>
int main()
{
   int i,j,x;
   i=1;
   while(i<=5)
   {
      j=1;
      while(j<=(5-i)*1)
      {
	 printf(" ");
	 j++;
      }
      x=1;
      while(x<=i)
      {
	 printf("*");
	 x++;
      }
      printf("\n");
      i++;
   }
}



