#include<stdio.h>
int main()
{
   int n,power,i;
   i=1,power=1;
   printf("Enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      power=power*2;
      i++;
   }
   printf("2power:%d%d",n,power);
}

