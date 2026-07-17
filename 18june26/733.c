#include<stdio.h>
int main()
{
   int i,j,x,n;
   printf("enter n value:");
   scanf("%d",&n);
   for(i=n;j<=n-i;j++)
   {
      for(i=n;j<=n-i;j++)
	 printf(" ");
      for(x=1;x<=i;x++)
	 printf("*");
      printf("\n");
   }
   for(i=2;i<=n;i++)
   {
      for(i=n;j<=n-i;j++)
	 printf(" ");
      for(x=1;x<=i;x++)
	 printf("*");
      printf("\n");
   }
}
