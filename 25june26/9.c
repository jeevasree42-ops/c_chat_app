#include<stdio.h>
int main()
{
   int i=0,j=0,k=0;
   for ( ; i++<=2; )
      for( ; j++<=2; );
	 for( ;k++<=2; );
	 printf("%d %d %d\n",i,j,k);
}








