#include<stdio.h>
int main()
{
   int x,y,z,m;
   printf("Enter x,y,z value:");
   scanf("%d",&x);
   scanf("%d",&y);
   scanf("%d",&z);
   m=(x+y)?((x>z)?x:z):((y>z)?y:z);
   printf("largest three value:%d\n",m);
}

