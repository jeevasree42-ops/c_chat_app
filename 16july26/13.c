#include<stdio.h>
#include<ctype.h>
void fun();
int main()
{
   fun();
}
void fun()
{
   int i=1,j;
   while(i<=5)
   {
      j=i;
      while(j>=1)
      {
	 printf("%d",j);
	 j--;
      }
      printf("\n");
      i++;
   }
}











