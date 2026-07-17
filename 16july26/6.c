#include<stdio.h>
int n;
void read();
void fun();
int main()
{
   read();
   fun();
}
void read()
{
   scanf("%d",&n);
}
void fun()
{
   int i,x=1;
   if(n<=1)
      x=0;
   else
   {
   for(i=2;i<=n/2;i++)
   {
      if(n%i==0)
      {
	 x=0;
	 break;
      }
   }
   }
   if(x)
      printf("prime number\n");
   else
      printf("not prime number\n");
   
}





