#include<stdio.h>
int main()
{
   int x;
   x=fun();
   printf("%d\n",x);
   x=fun();
   printf("%d\n",x);
}
fun()
{
   int a;
   printf("%d\n",a);
   a=10;
   a=10+20;
   printf("%d\n",a);
}
