#include<stdio.h>
int main()
{
   int n,i;
   i=0;
   printf("Enter n value:");
   scanf("%d",&n);
   while(n>0)
   {
      n=n/10;
      i++;
   }
   printf("%d",i);
}
