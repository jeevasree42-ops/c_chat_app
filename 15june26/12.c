#include<stdio.h>
int main()
{
   int i,n,sum;
   i=1,sum=0;
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      sum=sum+i;
      i++;
   }
   printf("%d",sum);
}

