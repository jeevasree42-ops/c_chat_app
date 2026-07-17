#include<stdio.h>
int main()
{
   int i,z;
   printf("enter z value:");
   scanf("%d",&z);
   i=10;
   while(i>=z)
   {
      printf("%d\n",z);
      z--;
   }
}
