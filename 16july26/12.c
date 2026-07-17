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
      j=1;
      while(j<=i)
      {
	 if(j%2==1)
	    printf("1");
	 else
	    printf("0");
	 j++;
      }
      printf("\n");
      i++;
   }
}










