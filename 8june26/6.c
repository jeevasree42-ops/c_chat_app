#include<stdio.h>
int main()
{
   int i,n,fact;
   i=1,fact=1;
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      fact=fact*i;
      i++;
   }
   printf("factorial:%d",fact);
}

