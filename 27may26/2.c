#include<stdio.h>
int main()
{
   int hours,minutes,sec;
   printf("enter hours,minutes,sec value:");
   scanf("%d%d%d",&hours,&minutes,&sec);
   if(sec>=0)
   {
      hours=sec/3600;
      minutes=(sec%3600)/60;
      sec=sec%60;
      printf("H:M:S,%d %d %d\n", hours,minutes,sec);
   }
   else
   {
      printf("invalid");
   }
}
      
