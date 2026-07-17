#include<stdio.h>
int main()
{
   int i,j;
   i=1;
   while(i<=5)
   {
      j=1;
      while(j<=i)
      {
	 if((i+j)%2==0)
	    printf("1");
	 else
	    printf("0");
	 j++;
      }
      printf("\n");
      i++;
   }
}
