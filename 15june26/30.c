#include<stdio.h>
int main()
{
   int x,n,i=1,p=1;
   float sum=1;
   long fact=1;
   scanf("%d %d",&x,&n);
   while(i<=n)
   {
      long power=1;
      int j=1;
      while(j<=p)
      {
	 power=power*x;
	 j++;
      }
      sum=sum+power;
      i++;
   }
   printf("%f",sum);
}


