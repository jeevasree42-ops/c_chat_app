#include<stdio.h>
int main()
{
   int n,i=1;
   scanf("%d",&n);
   while(i<=10)
   {
      int j=1;
      while(j<=1)
      {
	 printf("%d*%d:%d\n",n,i,n*i);
	 j++;
      }
     i++;
   }
}

