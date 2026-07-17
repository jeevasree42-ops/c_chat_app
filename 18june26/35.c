
#include<stdio.h>
int main()
{
   int i=5,x,j;
   char y;
   while(i>=1)
   {
      x=1;
      while(x<=5-i)
      {
	 printf(" ");
	 x++;
      }
      j=1;
      y='A';
      while(j<=i)
      {
	 printf("%c",y);
	 y++;
	 j++;
      }
      printf("\n");
      i--;
   }
}



