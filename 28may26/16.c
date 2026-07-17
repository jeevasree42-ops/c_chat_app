#include<stdio.h>
int main()
{
   int a,b,q,r;
   printf("enter two numbers:");
   scanf("%d%d",&a,&b);
   q=a/b;
   r=a%b;
   printf("quotient=%d\n",q);
   printf("reminder=%d\n",r);
}

