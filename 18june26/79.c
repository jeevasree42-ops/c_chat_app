#include<stdio.h>
int main()
{
   int n,i,j;
   printf("entern value:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      for(j=1;j<=i;j++)
	 printf(" ");
      for(j=1;j<=2*(n-i)-1;j++)
      {
	 if(i==0||j==1||j==2*(n-i)-1)
	    printf("%d",j);
	 else
	    printf(" ");
      }
      printf("\n");
   }
   for(i=2;i<=n;i++)
   {
      for(j=0;j<n-i;j++)
	 printf(" ");
      for(j=1;j<=2*i-1;j++)
      {
	 if(i==n||j==1||j==2*i-1)
	    printf("%d",j);
	 else
	    printf(" ");
      }
      printf("\n");
   }
}
    
