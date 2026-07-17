#include<stdio.h>
int main()
{
   int n;
   long long oct=0,p=1;
   scanf("%d",&n);
   while(n>0)
   {
      oct=oct+(n%8)*p;
      p=p*10;
      n=n/8;
   }
   printf("%lld",oct);
}

