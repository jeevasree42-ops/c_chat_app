#include<stdio.h>
int main()
{
   int n,b,p;
   b=0,p=1;
   scanf("%d",&n);
   while(n!=0)
   {
      b=b+(n%2)*p;
      p=p*10;
      n=n/2;
   }
   printf("%d",b);
}

