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
   if(isxdigit(x))
      printf(" Hecadecimal Digit");
   else
      printf("not an Hexa decimal Digit");
}


