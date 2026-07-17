#include<stdio.h>
int main()
{
   int x,n,i=1,j;
   long fact,power;
   float sum=1;
   scanf("%d %d",&x,&n);
   while(i<=n)
   {
      fact=1;
      power=1;
      j=1;
      while(j<=i)
      {
	 fact=fact*j;
	 power=power+x;
	 j++;
      }
      sum=sum+(float)power/fact;
      i++;
   }
   printf("%.2f",sum);
}
