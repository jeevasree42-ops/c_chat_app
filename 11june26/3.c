#include<stdio.h>
int main()
{
   int i,j,n,p,sum;
   i=1,sum=0;
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      p=1;
      j=1;
      while(j<=i)
      {
	 p=p*i;
	 j++;
      }
      sum=sum+p;
      i++;
   }
   printf("%d",sum);
}


