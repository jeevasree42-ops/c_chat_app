#include<stdio.h>
void star();
int main()
{
   int x;
   scanf("%d",&x);
switch(x)
{
   case 1:
      star();
      break;
}
}
void star()
{
   int i,j;
   for (i=1;i<=5;i++)
   {
      for(j=1;j<=i;j++)
      {
	 printf("*");
      }
      printf("\n");
   }
}














