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
   if(isdigit(x))
      printf("Digit");
   else
      printf("not an Digit");
}

