#include<stdio.h>
int main()
{
   int i=0,j=0;
   do
   {
      do
      {
	 printf("%d %d\n",i++,j++);
      } while(i<=2);
   } while(j<=3);
   printf("%d %d\n",i,j);
}
