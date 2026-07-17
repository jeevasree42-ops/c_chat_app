#include<stdio.h>
int main()
{
   int n,i=1,j;
   long t,sum=0;
   scanf("%d",&n);
   while(i<=n)
   {
      t=0;
      j=1;
      while(j<=i)
      {
	 t=t*10+1;
	 j++;
      }
      sum=sum+t;
      i++;
   }
   printf("%ld",sum);
}
      



