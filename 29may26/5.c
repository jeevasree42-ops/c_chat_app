#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter three angless:");
   scanf("%d%d%d",&a,&b,&c);
   if(a+b+c==180)
      printf("triangles can be formed");
   else
     printf("triangles can not be formed");
} 

