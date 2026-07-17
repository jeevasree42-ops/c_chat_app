#include<stdio.h>
int main()
{
   int n=5,i=0,j,x;
   while(i<n)
   {
      j=0;
      while(j<n-i-1)
      {
	 printf(" ");
	 j++;
      }
      x=1;
      j=0;
      while(j<=i)
      {
	 printf("%d ", x);
	 x=x*(i-j)/(j+1);
	 j++;
      }
      printf("\n");
      i++;
   }
}
