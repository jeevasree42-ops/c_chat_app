#include<stdio.h>
int main()
{
   int x,y,z,m;
   printf("enterx,y,z values:");
   scanf("%d%d%d",&x,&y,&z);
   m=(x>y)?((x>z)?x:z):((y>z)?y:z);
   printf("largest value:%d\n",z);
}
