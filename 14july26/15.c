#include<stdio.h>
int sub( );
int main()
{
   int pro;
   pro=sub();
   printf("pro:%d",pro);
}
int sub()
{
   int a,b;
   scanf("%d %d",&a,&b);
   return (a-b);
}



