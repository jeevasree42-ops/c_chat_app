#include<stdio.h>
int main()
{
   int n,r;
   scanf("%d",&n);
   while(n>0)
   {
      r=n%16;
      if(r<10)
	 printf("%d",r);
      else
	 printf("%c",r+55);
      n=n/16;
   }
}


