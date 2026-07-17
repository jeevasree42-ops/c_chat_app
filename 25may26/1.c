#include<stdio.h>
int main()
{
   int x,y,z;
   printf("Enter x,y,z,values:");
   scanf("%d%d%d",&x,&y,&z);
   if (x>y)?((x>y)?x:z):((y>z)?y:x);
   printf("largest values");
}
