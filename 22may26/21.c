#include<stdio.h>
int main()
{
   int year;
   printf("Enter year value:");
   scanf("%d",&year);
   if(year%4==0)
      printf("leap year");
}
