#include<stdio.h> 
int main()
{
   int n,t,x,f,l,m,p;
   x=1,p=1;
   scanf("%d",&n);
   t=n;
   l=n%10;
   while(t>=10)
   {
      t=t/10;
      p=p*10;
   }
   f=t;
   m=(n%p)/10;
   n=l*p+m*10+f;
   printf("%d",n);
}
