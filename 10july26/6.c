#include<stdio.h>
int main()
{
   int a=10;
   printf("%d\n",a);
   a=fun();
   printf("%d\n",a);
}
fun()
{
   printf("bye\n");
}
