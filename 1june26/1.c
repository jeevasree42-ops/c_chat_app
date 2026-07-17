#include<stdio.h>
int main()
{
   int i,mark,total,percentage;
   i=1,total=0;
   while(i<=5)
   {
      printf("enter mark%d:",i);
      scanf("%d",&mark);
      total=total+mark;
      i++;
   }
   percentage=total/5;
   printf("percentage=%d%%",percentage);

}
