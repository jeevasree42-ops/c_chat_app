#include<stdio.h>
int main()
{
   int i;
   i=1;
   while(i<=5)
   {
      i++;
      if(i==3)
      {
	 continue;
      }
      printf("%d\n",i);
   }
}
