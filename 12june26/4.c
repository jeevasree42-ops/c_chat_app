#include<stdio.h>
int main()
{
   int n,i=1,j;
   float fact,sum=1;
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
      sum=sum+(float)i/fact;
      i++;
   }
   printf("%.2f",sum);
}
