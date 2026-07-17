#include<stdio.h>
int main()
{
   int x,n,power,i;
   i=1,power=1;
   printf("Enter x value:");
   scanf("%d",&x);
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      power=power*x;
      i++;
   }
   printf("%d power %d:%d",x,n,power);
}


