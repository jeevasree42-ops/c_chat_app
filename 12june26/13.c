#include<stdio.h>
int main()
{
   int i,j;
   i=1;
   j=3;
   while(i<=3)
   {
      j=3;
      while(j>=1)
      {
	 j--;
	 if(i==j)
	 {
	    continue;
	 }
	 printf("%d %d\n",i,j);
      }
      i++;
   }
}
