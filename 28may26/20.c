#include<stdio.h>
int main()
{
   int a,b;
   printf("enter a,b values:");
   scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("after swapping:\n");
   printf("a=%d\nb=%d",a,b);
}
