#include<stdio.h>
int main()
{
   int i=1,j;
   int x=1;
   int n=4;
   while(i<=n)
   {
      j=1;
      while(j<=i)
      {
	 printf("%d",x);
	 x++;
	 j++;
      }
      printf("\n");
      i++;
   }}

