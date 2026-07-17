#include<stdio.h>
int main()
{
   int i,j,x;
   i=1;
   char ch;
   while(i<=5)
   {
      j=1;
      while(j<=(5-i)*1)
      {
	 printf(" ");
	 j++;
      }
      x=1;
      ch='A';
      while(x<=i)
      {
	 printf("%c",ch);
	 ch++;
	 x++;
      }
      printf("\n");
      i++;
   }
}





