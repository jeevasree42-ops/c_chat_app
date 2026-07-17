#include<stdio.h>
int main()
{
   int i,j;
   i=5;
   while(i>=1)
   {
      j=1;
      while(j<=5)
      {	 printf("%d",i);
	 j--;
      }
      printf("\n");
      i--;
   }
}
