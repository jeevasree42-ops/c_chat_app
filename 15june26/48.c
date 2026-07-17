#include<stdio.h>
int main()
{
   int n,i=2,x=1;
   scanf("%d",&n);
   while(i<n)
   {
      if(n%i==0)
      {
	  x=0;
	 break;
      }
      i++;
   }
   if(x&&n>1)
      printf("prime number");
   else
      printf("not prime number");
}



