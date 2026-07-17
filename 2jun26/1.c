#include<stdio.h>
int main()
{
   int i,n,sum,mark;
   i=1,sum=0;
   printf("enter number of subjects value:");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("enter mark value:");
      scanf("%d",&mark);
      sum=sum+mark;
      i++;
   }
   printf("total mark:%d",sum);
}
