#include<stdio.h>
int main()
{
   int i=1,j,n=5;
   while(i<=n)
   {
      j=1;
      while(j<=n+i-1)
      {
	 if(j==n-i+1||j==n+i-1)
	    printf("%d",j);
	 else
	    printf(" ");
	 j++;
      }
      printf("\n");
      i++;
   }
   i=n-1;
   while(i>=1)
   {
      j=1;
      while(j<=n+i-1)
      {
	 if(j==n-i+1||j==n+i-1)
	    printf("%d",j);
	 else
	    printf(" ");
	 j++;
      }
      printf("\n");
      i--;
   }
}


