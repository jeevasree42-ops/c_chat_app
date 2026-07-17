#include<stdio.h>
int main()
{
   int n,i=2,j,p,sum=0;
   scanf("%d",&n);
   while(i<=n)
   {
      p=1;
      j=2;
      while(j<i)
      {
	 if(i%j==0)
	 {
	    p=0;
	    break;
	 }
	 j++;
      }
      if(p)
	 sum=sum+i;
	    i++;
   }
   printf("%d",sum);
}


