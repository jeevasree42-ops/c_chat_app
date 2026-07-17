#include<stdio.h>
#include<ctype.h>
int main()
{
   char a;
   printf("enter alphabet:");
   scanf("%c",&a);
   if(islower(a))
   {
      printf("it is lowercase");
   }
   else if(isupper(a))
   {
      printf("it is uppercase");
   }
   else
   {
      printf("not an alphabate");
   }
}

