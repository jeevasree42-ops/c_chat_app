#include<stdio.h>
int main()
{
   int x,y;
   scanf("%d",&x);
   switch(x)
   {
      case 10:
	 scanf("%d",&y);
	 switch(y)
	 {
	    case 5:
	       printf("hi\n");
	       break;
	    case 10:
	       printf("bye\n");
	 }
	 break;
      case 20:
	 printf("tweenty\n");
	 break;
      default:
	 printf("sl\n");
	 break;
   }
}
