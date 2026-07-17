#include<stdio.h>
int main()
{
   int i,n,j,x;
   printf("enter n value:");
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
      for(x=1;x<=n-i;x++)
      {
	 printf(" ");
      }
      for(j=1;j<=i;j++)
      {
	 printf("%d",j);
      }
      printf("\n");
   }
}


