#include<stdio.h>
int main()
{
   int mark,i,n,y,a,b,c,d,e,f;
   i=0,y=0,a=0,b=0,c=0,d=0,e=0,f=0;
   printf("enter n value:");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("enter mark value:");
      scanf("%d",&mark);
      {
	 if(mark>=90&&mark<=100)
	    y++;
	 else if(mark>=80&&mark<=89)
	    a++;
	 else if(mark>=70&&mark<=79)
	    b++;
	 else if(mark>=60&&mark<=69)
	    c++;
	 else if(mark>=50&&mark<=59)
	    d++;
	 else if(mark>=35&&mark<=45)
	    e++;
	 else
	    f++;
      }
      i++;
   }
   printf(a+"%d\n",a+);
   printf(a"%d\n",a);
   printf(b"%d\n",b);
   printf(c"%d\n",c);
   printf(d"%d\n",d);
   printf(e"%d\n",e);
   printf(f"%d\n",f);
}
