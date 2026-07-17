#include<stdio.h>
int main()
{
   int i=1,j,x;
   while(i<=5)
   {
      j=1;
      while(j<=5-i)
      {
	 printf(" ");
	 j++;
      }
      x=1;
      while(x<=2*i-1)
      {
	 printf("%d",x);
	 x++;
      }
      printf("\n");
      i++;
   }
}

