#include<stdio.h>
int main()
{
   int mark,i,n,sum;
   i=1,sum=0;
   printf("enter number of subjects:");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("enter mark value:");
      scanf("%d",&mark);
      (mark>=35)?printf("pass"):printf("fail");
      sum=sum+mark;
      i++;
   }
   printf(" pass total mark%d",sum);
}

