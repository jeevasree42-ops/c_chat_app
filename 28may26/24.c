#include<stdio.h>
int main()
{
   float a,b,c,d,r1,r2;
   printf("enter a,b,c,d values:");
   scanf("%f%f%f%f",&a,&b,&c,&d);
   d=b*b-4*a*c;
   r1=(-b+d)/(2*a);
   r2=(-b-d)/(2*a);
   printf("root 1=%f\n",r1);
   printf("root 2=%f\n",r2);
}
