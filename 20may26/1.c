#include<stdio.h>
int main()
{
   int x,y,z;
   printf("Enter x,y,z values:");
   scanf("%d%d%d",&x,&y,&z);
   (x==y&&y==z)?printf("x,y,z are equal"):((x<y&&y==z)?printf("x<y,z are equal"):((x<y&&y!=z)?printf("x<y,z are different"):((y<x&&x==z)?printf("y<x,z are equal"):((y<x&&x!=z)?printf("y<x,z are different"):((z<x&&x==y)?printf("z<x,y are equal"):((z<x&&x!=y)?printf("z<x,y are different"):((x>y&&y==z)?printf("x>y,z are equal"):((x>y&&y!=z)?printf("x>y,z are different"):((y>x&&x==z)?printf("y>x,z are equal"):((y>x&&x!=z)?printf("y>x,z are different"):((z>x&&x==y)?printf("z>x,y are equal"):((z>x&&x!=y)?printf("z>x,y are different"):printf("nothing")))))))))))));
}
 
   
