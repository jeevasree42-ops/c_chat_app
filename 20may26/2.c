#include<stdio.h>
int main()
{
   int x,y,z,m;
   printf("Enter x,y,z,m values:");
   scanf("%d%d%d%d",&x,&y,&z,&m);
   (x==y&&y==z&&z==m)?printf("x,y,z,m are equal"):((x<y&&y==z&&z==m)?printf("x<y,z,m are equal"):((x<y&&y!=z&&z!=m)?printf("x<y,z,m are different"):((y<x&&x==z&&z==m)?printf("y<x,z,m are equal"):((y<x&&x!=z&&z!=m)?printf("y<x,z,m are different"):((z<x&&x==y&&y==m)?printf("z<x,y,m are equal"):((z<x&&x!=y&&y!=m)?printf("z<x,y,m are different"):((m<x&&x==y&&y==z)?printf("m<x,y,z are equal"):((m<x&&x!=y&&y!=z)?printf("m<x,y,z are different"):((x>y&&y==z&&z==m)?printf("x>y,z,m are equal"):((x>y&&y!=z&&z!=m)?printf("x>y,z,m are different"):((y>x&&x==z&&z==m)?printf("y>x,z,m are equal"):((y>x&&x!=z&&z!=m)?printf("y>x,z,m are different"):((z>x&&x==y&&y==m)?printf("z>x,y,m are equal"):((z>x&&x!=y&&y!=m)?printf("z>x,y,m are different"):((m>x&&x==y&&y==z)?printf("m>x,y,z are equal"):((m>x&&x!=y&&y!=z)?printf("m>x,y,z are different"):printf("nothing")))))))))))))))));
}
 
   

