#include<stdio.h>
int main()
{
   int n,j;
   j=0;
   scanf("%d",&n);
   while(n>0)
   {
      n=n/10;
      j++;
   }
   printf("%d",j++);
}
