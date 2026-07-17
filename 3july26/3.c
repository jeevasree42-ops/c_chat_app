#include<stdio.h>
int main()
{
   int x=5,y=10;
   switch(x&&y)
   {
      case 0:
	 printf("hi\n");
	 break;
      case 1:
	 printf("bye\n");
	 break;
      default:
	 printf("welcome to sl\n");
	 break;
   }
}

