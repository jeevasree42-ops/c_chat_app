#include<stdio.h>
int main()
{
   int n,q,x;
   //q=1;
   scanf("%d",&n);
//   while(q<=n)
  // {
      while(n!=222)
      {	 scanf("%d",&x);
	 if(x>0)
	    printf("positive\n");
	 else if(x<0)
	    printf("negative\n");
	 else if(x==0)
	    printf("zero\n");
	 else
	    printf("nothing");
	 break;
      }
     // printf("%d\n",q);
}

