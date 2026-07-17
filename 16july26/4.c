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
   if(islower(x))
      printf(" lower case letter");
   else
      printf("not an lower case  letter");
}



