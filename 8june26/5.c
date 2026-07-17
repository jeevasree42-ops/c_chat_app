#include<stdio.h>
int main()
{
   int i,x,a,sum;
   i=1,a=0,sum=0;
   scanf("%d",&x);
   i=1;
   while(x!=222)
   {
      if(x<=0)
	 a++;
      sum=sum+x;
      i++;
      printf("x:%d",x);
      scanf("%d",&x);
   }
   printf("total value:%d\n",sum);
}
