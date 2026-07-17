#include<stdio.h>
int main()
{
   int n,num,even,i;
   i=1,even=0;
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("enter num value:");
      scanf("%d",&num);
      if(num%2==0)
	 even++;
      i++;
   }
   printf("even:%d\n",even);
}

