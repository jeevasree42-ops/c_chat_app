#include<stdio.h>
int main()
{
   int i,j;
   i=1;
   j=5;
   while(i<=5)
   {
      while(j>=1)
      {
	 j--;
	 if(i==j)
	 {
	    break;
	 }
	 printf("%d %d\n",i,j);
      }
      i++;
   }
}
