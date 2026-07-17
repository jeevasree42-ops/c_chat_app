#include<stdio.h>
int a=10;
int b=100;
int main()
{
   printf("%d %d\n",a,b);
   fun();
   printf("%d %d\n",a,b);
}
fun()
{
   printf("%d %d\n",a,b);
   b=b+20;
}


