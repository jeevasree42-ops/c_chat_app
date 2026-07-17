#include<stdio.h>
int main()
{
   int i=1,j,k;
   char x;
   while(i<=5)
   {
      j=1;
      while(j<=5-i)
      {
	 printf(" ");
	 j++;
      }
      k=1;
      x='A';
      while(k<=2*i-1)
      {
	 if(i==5||k==1||k==2*i-1)
	    printf("%c",x);
	 else
	    printf(" ");
	 x++;
	 k++;
      }
      printf("\n");
      i++;
   }
}


