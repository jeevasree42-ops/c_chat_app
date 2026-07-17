#include<stdio.h>
int main()
{
   int a,b,max;
   printf("Enter a,b value:");
   scanf("%d%d",&a,&b);
   max=(a>b)?a:b;
   printf("maximum=%d",max);
}

