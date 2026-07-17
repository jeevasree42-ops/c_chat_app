#include<stdio.h>
int main()
{
   int n,num,digit,rev;
   rev=0;
   printf("enter n value:");
   scanf("%d",&n);
   num=n;
   while(num>0)
   {
      digit=num%10;
      rev=(rev*10)+digit;
      num=num/10;
   }
   printf("The reverse of the number:%d",rev);
}

