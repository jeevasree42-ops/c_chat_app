#include<stdio.h>
int main()
{
   int d=1329;
   printf("years=%d\n",d/365);
   printf("weeks=%d\n",(d%365)/7);
   printf("days=%d\n",(d%365)%7);
}
