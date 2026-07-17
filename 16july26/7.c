#include<stdio.h>
int read();
void fun(int);
int main()
{
   int n;
   n=read();
   fun(n);
}
int read()
{
   int n;
   scanf("%d",&n);
   return n;
}
void fun(int n)
{
   int i,a=0,b=1,c;
   for(i=1;i<=n;i++)
   {
      printf("%d",a);
      c=a+b;
      a=b;
      b=c;
   }
}






