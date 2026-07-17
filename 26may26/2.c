#include<stdio.h>
#include<ctype.h>
int main()
{
   char a;
   printf("enter alphabet:");
   scanf("%c",&a);
   if(islower(a))
   {
      printf("%c",a-32);
   }
   else if(isupper(a))
   {
      printf("%c",a+32);
   }
   else
   {
      printf("not an alphabate");
   }
}


