#include<stdio.h>
int main()
{
   int x,y,r,i;
   i=1,r=1;
   scanf("%d %d",&x,&y);
   while(i<=y)
   {
      r=r*x;
      i++;
   }
   printf("%d",r);
}

