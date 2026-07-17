#include<stdio.h>
int main()
{
   int n,i,j;
   printf("entern value:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n-i;j++)
	 printf(" ");

      printf("1");
      if(i>1)
      {
	 for(j=1;j<=2*i-3;j++)
	    printf(" ");

	 printf("%d",2*i-3);
      }
      printf("\n");
   }
   for(i=n-1;i>=1;i--)
   {
      for(j=1;j<=n-i;j++)
	 printf(" ");

      printf("1");
      if(i>1)
      {
	 for(j=1;j<=2*i-3;j++)
	    printf(" ");

	 printf("%d",2*i-1);
      }
      printf("\n");
   }
}

