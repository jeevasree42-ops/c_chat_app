#include<stdio.h>
int main()
{
   int n,i,j,x;
   printf("enter n value:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n-i;j++)
	 printf(" ");
      for(x=0;x<2*i-1;x++)
	 printf("%c",'A'+x);
      printf("\n");
   }
   for(i=n-i;i>=1;i--)
   {
      for(j=1;j<=n-i;j++)
	 printf(" ");
      for(x=0;x<2*i-1;x++)
	 printf("%c",'A'+x);
      printf("\n");
   }
}
