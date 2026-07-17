#include<stdio.h>
int main()
{
   int n,first,last;
   scanf("%d",&n);
   last=n%10;
   while(n>=10)
   {
      n=n/10;
   }
   first=n;
   printf("First Digit:%d\n",first);
   printf("Last Digit:%d\n",last);
   printf("%d",first+last);
}
