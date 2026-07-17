#include<stdio.h>
int main()
{
   fun();
   fun();
   fun();
}
fun()
{
   static int a;
   printf("%d\n",a);
   a++;
   printf("%d\n",a);
}

