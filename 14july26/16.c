#include<stdio.h>
void sub(int ,int);
int main()
{
   int x,y;
   scanf("%d %d",&x,&y);
   sub (x,y);
}
void sub(int x,int y)
{
   printf("pro:%d",x-y);
}




