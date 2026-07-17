#include<stdio.h>
int main()
{
   int i=1,j,k;
   char x;
   while(i<=5)
   {
      j=1;
      while(j<=i)
      {
	 printf(" ");
	 j++;
      }
      k=1;
      x='A';
      while(k<=5)
      {
	 printf("%c",x);
	 x++;
	 k++;
      }
      printf("\n");
      i++;
   }
}











