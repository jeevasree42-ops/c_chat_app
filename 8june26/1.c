#include<stdio.h>
int main()
{
   int n,num,odd,even,i;
   i=1,odd=0,even=0;
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("enter num value:");
      scanf("%d",&num);
      if(num%2==0)
	 even++;
      else
	 odd++;
      i++;
   }
   printf("odd:%d\n",odd);
   printf("even:%d\n",even);
}
