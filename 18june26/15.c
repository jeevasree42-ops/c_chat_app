#include<stdio.h>
int main()
{
   int i,j;
   i=1;
   while(i<=5)
   {
      j=1;
      while(j<=i)
      {
	 if(i==1)
	    printf("1");
	 else if(i==2)
	    printf("%d",(j-1)%2);
	 else if(i==3)
	    printf("%d",j%2==1?0:1);
	 else if(i==4)
	    printf("%d",j%2);
	 else
	    printf("%d",j%2);
	 j++;
      }
      printf("\n");
      i++;
   }
}


