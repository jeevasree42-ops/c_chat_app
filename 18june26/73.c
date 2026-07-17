#include<stdio.h>
int main()
{
   int i,j,n;
   printf("enter n value:");
   scanf("%d",&n);
   for(i=n;i>=1;i-=2)
   {
      for(j=1;j<=(n-i)/2;j++)
	 printf(" ");
      for(j=1;j<=i;j++)
	 printf("*");
      printf("\n");
   }
   for(i=3;i<=n;i+=2)
   {
      for(j=1;j<=(n-i)/2;j++)
	 printf(" ");
      for(j=1;j<=i;j++)
	 printf("*");
      printf("\n");
   }
}

