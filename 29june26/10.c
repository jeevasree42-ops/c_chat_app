#include<stdio.h>
int main()
{
   int i=0,j=0;
   do
   {
      do
      {
	 printf("%d %d\n",i,j);
      } while(j++<=3);
   } while(i++<=3);
}

