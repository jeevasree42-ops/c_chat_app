#include<stdio.h>
int main()
{
   int n,x,i,j=1;
   float fact,sum=1;
   scanf("%d",&n);
   scanf("%d",&x);
   while(i<=n)
   {
      fact=1;
      j=1;
      while(j<=i)
      {
	 fact=fact*x;
	 j++;
      }
      sum=sum+(float)x/fact;
      i++;
   }
   printf("%.2f",sum);
}

