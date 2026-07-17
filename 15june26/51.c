#include<stdio.h>
int main()
{
   int n,i=2,j,p;
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
	 printf("%d",i);
      i++;
   }
}



