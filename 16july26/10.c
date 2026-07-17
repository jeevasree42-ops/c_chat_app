#include<stdio.h>
void number();
int main()
{
   int n;
   scanf("%d",&n);
switch(n)
{
   case 1:
      number();
      break;
}
}
void number()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
      for(j=1;j<=i;j++)
      {
	 printf("%d",j);
      }
      printf("\n");
   }
}














