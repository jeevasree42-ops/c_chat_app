#include<stdio.h>
int main()
{
   int n,num,odd,i;
   i=1,odd=0;
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("enter num value:");
      scanf("%d",&num);
      if(num%2!=0)
	 odd++;
      i++;
   }
   printf("odd:%d\n",odd);
}


