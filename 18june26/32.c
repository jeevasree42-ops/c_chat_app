#include<stdio.h>
int main()
{
   int i=1,j,x;
   char ch;
   while(i<=5)
   {
      j=1;
      while(j<=5-i)
      {
	 printf(" ");
	 j++;
      }
      x=1;
      ch='A';
      while(x<=2*i-1)
      {
	 printf("%c",ch);
	 ch++;
	 x++;
      }
      printf("\n");
      i++;
   }
}


