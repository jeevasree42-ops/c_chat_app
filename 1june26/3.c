#include<stdio.h>
int main()
{
   int mark;
   while(1)
   {
      printf("enter mark:");
      scanf("%d",&mark);
      (mark>=35)?printf("pass"):printf("fail");
   }
}


