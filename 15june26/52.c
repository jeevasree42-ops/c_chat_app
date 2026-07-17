#include<stdio.h>
int main()
{
   long long bin;
   int dec=0,b=1,r;
   scanf("%lld",&bin);
   while(bin>0)
   {
      r=bin%10;
      dec=dec+r*b;
      b=b*2;
      bin=bin/10;
   }
   printf("%o",dec);
}













