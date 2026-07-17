#include<stdio.h>
int main()
{
   char ch='A';
   while(ch<='Z')
   {
      int j=1;
      while(j<=1)
      {
	 printf("%c",ch);
	 j++;
      }
      ch++;
   }
}
