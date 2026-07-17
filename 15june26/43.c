#include<stdio.h>
int main()
{
   char x='A';
   while(x<='Z')
   {
      printf("%c",x);
      x++;
   }
   printf("\n");
   x='a';
   while(x<='z')
   {
      printf("%c",x);
      x++;
   }
}

