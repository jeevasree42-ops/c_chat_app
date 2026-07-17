#include<stdio.h>
int main()
{
   int i,j;
   i=0;
   while(i>=0)
   {
      j=1;
      while(j<=3)
      {
	 printf("%d %d\n",i,j);
	 j++;
      }
      i--;
   }
}

