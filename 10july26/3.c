#include<stdio.h>
int main()
{
   int a=10;
   printf("%d\n",a);
   fun();
   printf("%d\n",a);
}
fun()
{
   int b=100;
   printf("%d %d\n",a,b);
}

