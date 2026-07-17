#include<stdio.h>
#include<ctype.h>
void fun();
int main()
{
   fun();
}
void fun()
{
   char x;
   scanf("%c",&x);
   if(isalpha(x))
      printf("alphabate");
   else
      printf("not an alphabate");
}
