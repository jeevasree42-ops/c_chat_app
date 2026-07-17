#include<stdio.h>
int main()
{
   float w1,w2,avg;
   int n1,n2;
   printf("enter weight of item 1:");
   scanf("%f",&w1);
   printf("enter number of item 1:");
   scanf("%d",&n1);
   printf("enter weight of item 2:");
   scanf("%f",&w2);
   printf("enter number of item 2:");
   scanf("%d",&n2);
   avg=((w1*n1)+(w2*n2)/(n1+n2));
   printf("average value=%f\n",avg);
}


