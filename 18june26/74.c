#include<stdio.h>
int main()
{
   int n,i,j;
   printf("enter n value:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n;j++)
      {
	 if(i==1||i==n)
	    printf("%d",j);
	 else if(j==1)
	    printf("1");
	 else if(j==n)
	 printf("%d",n);
	 else
	    printf(" ");
      }
      printf("\n");
   }
}

