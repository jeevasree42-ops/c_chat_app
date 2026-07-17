#include<stdio.h>
#include<ctype.h>
int main()
{
   char x;
   scanf("%c",&x);
   int a=isalpha(x);
   int b=isupper(x);
   int c=islower(x);
   printf("%c %d %d %d\n",x,a,b,c);
}



