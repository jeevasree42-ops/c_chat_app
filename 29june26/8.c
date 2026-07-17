#include<stdio.h>
int main()
{
   int i=0,j=0;
   do
   {
      j=0;
      do
      {
	 printf("%d %d\n",i,j);
	 j++;
      } while(j<=2);
      i++;
   } while(i<=2);
}



