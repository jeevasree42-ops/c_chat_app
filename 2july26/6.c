#include<stdio.h>
int main()
{
   int x,y=5;
   scanf("%d",&x);
   switch(x)
   {
      case y:
      printf("hi\n");
      break;
      case y+5:
      printf("bye\n");
      break;
      case 15:
      printf("welcome\n");
      default:
      printf("sl\n");
   }
}





