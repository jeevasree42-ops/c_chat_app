#include<stdio.h>
int main()
{
   int i,j;
   i=1;
   j=1;
   while(i++<=5)
   {
      j=1;
      while(j++<=5)
      {
	 printf("%d %d\n",i,j);
      }
   }
   printf("%d %d\n",i,j);
}
