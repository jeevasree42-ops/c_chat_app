#include<stdio.h>
int main()
{
   int n;
   long long bin=0,p=1;
   scanf("%d",&n);
   while(n>0)
   {
      bin=bin+(n%2)*p;
      p=p*10;
      n=n/2;
   }
   printf("%lld",bin);
}
