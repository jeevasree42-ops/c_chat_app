#include<stdio.h>
int main()
{
   int i=5,j,s;
   while(i>=1)
   {
      s=5-i;
      while(s--)
	 printf(" ");
      j=1;
      while(j<=2*i-1)
      {
	 printf("*");
	 j++;
      }
      printf("\n");
      i--;
   }
   i=2;
   while(i<=5)
   {
      s=5-i;
      while(s--)
	 printf(" ");
      j=1;
      while(j<=2*i-1)
      {
	 printf("*");
	 j++;
      }
      printf("\n");
      i++;
   }
}


