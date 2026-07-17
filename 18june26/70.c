#include<stdio.h>
int main()
{
    int n,i,j,x;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
       for(j=1;j<=n-i;j++)
       {
	  printf(" ");
       }
       for(x=1;x<=2*i-1;x++)
       {
	  printf("*");
       }
       printf("\n");
    }
}
