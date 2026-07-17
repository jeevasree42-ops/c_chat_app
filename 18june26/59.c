#include<stdio.h>
int main()
{
   int n=5;
   int i=n,j,s;
   while(i>=1)
   {
      s=1;
      while(s<=n-i)
      {
	 printf(" ");
	 s++;
      }
      j=1;
      while(j<=2*i-1)
      {
	 if(j==1||j==2*i-1||i==n)
	    printf("*");
	 else
	    printf(" ");
	 j++;
      }
      printf("\n");
      i--;
   }
   i=2;
   while(i<=n)
   {
      s=1;
      while(s<=n-i)
      {
	 printf(" ");
	 s++;
      }
      j=1;
      while(j<=2*i-1)
      {
	 if(j==1||j==2*i-1||i==n)
	    printf("*");
	 else
	    printf(" ");
	 j++;
      }
      printf("\n");
      i++;
   }
}


