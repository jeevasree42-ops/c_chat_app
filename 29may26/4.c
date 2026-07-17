#include<stdio.h>
int main()
{
   int temp;
   printf("enter temperature value:");
   scanf("%d",&temp);
   if(temp<0)
      printf("freezing weather");
   else if(temp<=10)
      printf("very cold weather");
   else if(temp<=20)
      printf("cold weather");
   else if(temp<=30)
      printf("normal in temperatue");
   else if(temp<=40)
      printf("its hot");
   else if(temp>=40)
      printf("its very hot");
   else 
       printf("nothing");

}

