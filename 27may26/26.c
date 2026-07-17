#include<stdio.h>
int main()
{
   int distance;
   float fuel,avg;
   printf("enter distance:");
   scanf("%d",&distance);
   printf("enter fuel spent:");
   scanf("%f",&fuel);
   avg=distance/fuel;
   printf("average consumption=%3f",avg);
}
