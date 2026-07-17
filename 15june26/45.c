#include<stdio.h>
int main()
{
   int n,i,x;
   i=1,x=1;
   scanf("%d",&n);
   while(i<=n)
   {
      x=x*i;
      i++;
   }
   printf("%d",x);
}
