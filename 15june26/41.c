#include<stdio.h>
int main()
{
   int i=1,n,j,fact,sum=0;
   scanf("%d",&n);
   while(i<=n)
   {
      fact=1;
      j=1;
      while(j<=i)
      {
	 fact=fact*j;
	 j++;
      }
      sum=sum+fact;
      i++;
   }
   printf("%d",sum);
}

