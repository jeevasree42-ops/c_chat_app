#include<stdio.h>
int main()
{
   int x;
   scanf("%d",&x);
   switch(x)
   {
      case 1:
	 printf("sunday\n");
	 break;
      case 2:
	 printf("monday\n");
	 break;
      case 3:
	 printf("tuesday\n");
	 break;
      case 4:
	 printf("wednesday\n");
	 break;
      case 5:
	 printf("thursday\n");
	 break;
      case 6:
	 printf("friday\n");
	 break;
      case 7:
	 printf("saturday\n");
	 break;
      default:
	 printf("hi\n");
	 break;
   }
}
