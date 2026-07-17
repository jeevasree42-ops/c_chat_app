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
   if(isupper(x))
      printf(" upper  case letter");
   else
      printf(" not an upper case  letter");
}




