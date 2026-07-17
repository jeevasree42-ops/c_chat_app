#include<stdio.h>
int main()
{
   int n,t,c,x;
   x=0;
   scanf("%d",&n);
   while(x<=9)
   {
      t=n;
      c=0;
      while(t>0)
      {
	 if(t%10==x)
	 {
	    c++;
	 }
	 t=t/10;
      }
      printf("%d:%d\n",x,c);
      x++;
   }
}



