#include<stdio.h>
int main()
{
   int i=5,j,k;
   char x;
   while(i>=1)
   {
      k=1;
      while(k<=5-i)
      {
	 printf(" ");
	 k++;
      }
      j=1;
      x='A';
      while(j<=2*i-1)
      {
	 printf("%c",x);
	 x++;
	 j++;
      }
      printf("\n");
      i--;
   }
}


