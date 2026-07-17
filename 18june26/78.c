#include<stdio.h>
int main()
{
   int i,n,j,x;
   printf("enter n value:");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
      int y=1;
      for(j=0;j<n-i-1;j++)
	 printf("  ");
      for(x=0;x<=i;x++)
      {
	 printf("  %d",y);
	 y=y*(i-x)/(x+1);
      }
      printf("\n");
   }
}


