#include<stdio.h>
int add( );
int main()
{
   int sum;
   sum=add();
   printf("sum:%d",sum);
}
int add()
{
   int a,b;
   scanf("%d %d",&a,&b);
   return (a+b);
}


