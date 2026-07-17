#include<stdio.h>
int main()
{
   int x,n,i=2;
   float sum=1,fact,power,sign=-1;
   scanf("%d %d",&x,&n);
   while(i<=n)
   {
      fact=1;
      power=1;
      int j=1;
      while(j<=1)
      {
	 fact=fact*j;
	 power=power*x;
	 j++;
      }
      sum=sum+sign*(power/fact);
      sign=sign*(-1);
      i=i+2;
   }
   printf("%.2f",sum);
}
