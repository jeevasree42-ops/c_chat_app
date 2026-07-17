#include<stdio.h>
int main()
{
   int n,num,prime,i;
   i=1,prime=0;
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("enter num value:");
      scanf("%d",&num);
      if(num%2!=0)
	 prime++;
      i++;
   }
   printf("prime:%d\n",prime );
}



