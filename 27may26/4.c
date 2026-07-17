#include<stdio.h>
int main()
{
   int days;
   char year,months;
   printf("enter no.of.days value:");
   scanf("%d",&days);
   if(days>=0)
   {
      year=days/365;
      days=days%365;

      months=days/60;
      days=days%60;
      printf("%dyear(s)\n",year);
      printf("%dmonth(s)\n",months);
      printf("%dday(s)\n",days);
   }
   else
   {
      printf("invalid input");
   }
}
