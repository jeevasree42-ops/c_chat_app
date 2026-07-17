#include<stdio.h>
int main()
{
   int x;
   scanf("%d",&x);
   switch(x)
   {
      printf("hi\n");
      case 10:
      printf("ten\n");
      break;
      case 15:
      printf("fifteen\n");
      case 20:
      printf("tweenty\n");
      break;
      default:
      printf("bye\n");
      break;
      printf("welcome\n");
   }
}

