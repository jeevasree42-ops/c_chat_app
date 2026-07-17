#include<stdio.h>
int main()
{
   int i,j;
   char x;
   for(i=1;i<=5;i++)
   {
      for(j=1;j<=5-i;j++)
	 printf(" ");
      x='A';
      for(j=1;j<=2*i-1;j++)
	 printf("%c",x++);
      printf("\n");
   }
}
