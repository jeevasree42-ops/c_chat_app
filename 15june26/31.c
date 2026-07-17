#include<stdio.h>
int main()
{
   int x,n,i=1;
   long term=1,sum=1;
   scanf("%d %d",&x,&n);
   while(i<=n)
   {
      term=term*x;
      sum=sum+term;
      i++;
   }
   printf("%ld",sum);
}
