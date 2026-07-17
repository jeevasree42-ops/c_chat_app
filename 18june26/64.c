#include<stdio.h>
int main()
{
   int i=1,j;
   char y='A';
   while(i<=4)
   {
      j=1;
      while(j<=i)
      {
	 printf("%c",y);
	 y++;
	 j++;
      }
      printf("\n");
      i++;
   }
}
