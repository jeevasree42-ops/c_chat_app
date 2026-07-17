#include<stdio.h>
int main()
{
   int i=5,j,k;
   while(i>=1)
   {
      k=1;
      while(k<=5-i)
      {
	 printf(" ");
	 k++;
      }
      j=1;
      while(j<=2*i-1)
      {
	 printf("%d",j);
	 j++;
      }
      printf("\n");
      i--;
   }
}

