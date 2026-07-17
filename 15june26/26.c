#include<stdio.h>
int main()
{
   int x,n,i=1;
   long y;
   float sum=0;
   int z=1;
   scanf("%d %d",&x,&n);
   while(i<=n);
   {
      y=1;
      int j=1;
      while(j<=i)
      {
	 y=y*x;
	 j++;
      }
      sum=sum+z*y;
      z=z*-1;
      i=i+2;
   }
   printf("%.2f",sum);
}
      


