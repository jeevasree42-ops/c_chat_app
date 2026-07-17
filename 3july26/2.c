#include<stdio.h>
int main()
{
   int x=5,y=10;
   switch(x)
   {
      case 10:
	 printf("hi\n");
	 break;
      case 5+5:
	 printf("bye\n");
	 break;
      default:
	 printf("welcome to sl\n");
	 break;
   }
}
