#include<stdio.h>
void star();
void number();
int main()
{
   int choice;
   printf("1. star pattern\n");
   printf("2. number pattern\n");
   printf("enter your choice\n");
   scanf("%d",&choice);
switch(choice)
{
   case 1:
      star();
      break;
   case 2:
      number();
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





