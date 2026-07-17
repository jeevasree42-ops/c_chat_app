#include<stdio.h>
int main()
{
   int n,i,power,sum;
   power=1,i=1,sum=0;
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      power=power*n;
      sum=sum+power;
      i++;
   }
   printf("npower%d:%d",n,sum);
}


