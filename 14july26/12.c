#include<stdio.h>
void add(int ,int);
int main()
{
   int x,y;
   scanf("%d %d",&x,&y);
   add (x,y);
}
void add(int x,int y)
{
   printf("sum:%d",x+y);
}



