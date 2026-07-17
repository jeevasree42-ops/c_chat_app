#include<stdio.h>
int main()
{
   int i,j;
   i=1;
   while(i<=5)
   {
      j=i;
      while(j>=1)
      {
	 printf("%d",j);
	 j--;
      }
      printf("\n");
      i++;
   }
}
