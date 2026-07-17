#include<stdio.h>
int main()
{
   int x;
   scanf("%d",&x);
   switch(x)
   {
      case 10:
	 printf("Ten\n");
      case 20:
	 printf("twenty\n");
	 break;
      case 30:
	 printf("thirty\n");
      default:
	 printf("hi\n");
	 break;
   }
}






