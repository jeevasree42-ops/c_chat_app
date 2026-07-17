#include<stdio.h>
int main()
{
   int age;
   scanf("%d",&age);
   while(age!=0)
   {
      if(age<13)
	 printf("child");
      else if(age<20)
	 printf("teenage");
      else if(age<60)
	 printf("adult");
      else
	 printf("senior citizen");
      break;
   }
}


