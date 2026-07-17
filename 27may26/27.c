#include<stdio.h>
int main()
{
   float x1,x2,y1,y2;
   int distance;
   printf("enter input x1:");
   scanf("%f",&x1);
   printf("enter input x2:");
   scanf("%f",&x2);
   printf("enter input y1:");
   scanf("%f",&y1);
   printf("enter input y2:");
   scanf("%f",&y2);
   distance=((x1*y1)+(x2*y2)/(y1+y2));
   printf("distance between the said point%f\n",distance);
}
