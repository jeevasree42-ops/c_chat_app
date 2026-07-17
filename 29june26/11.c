#include<stdio.h>
int main()
{
   int n,x=0,sum=0,i=1;
   printf("enter n value:");
   scanf("%d",&n);
   do
   {
      if(x>=90&&x<=100)
	 printf("pass");
      else if(x>=80&&x<=89)
	 printf("pass");
      else if(x>=70&&x<=79)
	 printf("pass");
      else if(x>=60&&x<=69)
	 printf("pass");
      else if(x>=45&&x<=59)
	 printf("pass");
   } while(x<=35);
   sum=sum+x;
   i++;
   printf("%d",sum);
}
