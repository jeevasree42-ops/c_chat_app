#include<stdio.h>
int main()
{
   int i=0,j=0,k;
   for ( ; i++<=2; )
      for( ; j++<=2; )
	 for(k=0;k<=2;k++)
	 printf("%d %d %d\n",i,j,k);
}






