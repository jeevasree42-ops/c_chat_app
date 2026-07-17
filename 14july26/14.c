#include<stdio.h>
int sub(int ,int );
int main()
{
   int a,b,pro;
   scanf("%d %d",&a,&b);
   pro=sub(a,b);
   printf("pro:%d",pro);
}
int sub(int a,int b)
{
   return (a-b);
}


