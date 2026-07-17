#include<stdio.h>
int main()
{
   int i=1,j;
   char x;
   while(i<=5)
   {
      j=1;
      x='A';
      while(j<=5)
      {
	 if(i==1)
	    printf("%c",i);
	 else if(i==5)
	    printf("%c",i);
	 else if(j==1)
	    printf("%c",j);
	 else if(j==5)
	    printf("%c",j);
	 else
	    printf(" ");
	 x++;
	 j++;
      }
      printf("\n");
      x++;
      i++;
   }
}

