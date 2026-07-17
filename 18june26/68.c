#include<stdio.h>
int main()
{
   int n,i,j;
   char x;
   printf("enter n value:");
   scanf("%d",&n);
   for(i=n; i>=1;i--)
   {
      x='A';
      for(j=0;j<i;j++)
      {
	 printf("%c",x++);
      }
      printf("\n");
   }
}


