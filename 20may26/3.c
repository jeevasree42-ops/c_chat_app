#include<stdio.h>
int main()
{
   int x,y,z,m,n;
   printf("Enter x,y,z,m,n values:");
   scanf("%d%d%d%d%d",&x,&y,&z,&m,&n);
   (x==y&&y==z&&z==m&&m==n)?printf("x,y,z,m,n are equal"):((x<y&&y==z&&z==m&&m==n)?printf("x<y,z,m,n are equal"):((x<y&&y!=z&&z!=m&&m!=n)?printf("x<y,z,m,n are different"):((y<x&&x==z&&z==m&&m==n)?printf("y<x,z,m,n are equal"):((y<x&&x!=z&&z!=m&&m!=n)?printf("y<x,z,m,n are different"):((z<x&&x==y&&y==m&&m==n)?printf("z<x,y,m,n are equal"):((z<x&&x!=y&&y!=m&&m!=n)?printf("z<x,y,m,n are different"):((m<x&&x==y&&y==z&&z==n)?printf("m<x,y,z,n are equal"):((m<x&&x!=y&&y!=z&&z!=n)?printf("m<x,y,z,n are different"):((n<x&&x==y&&y==z&&z==m)?printf("n<x,y,z,m are equal"):((n<x&&x!=y&&y!=z&&z!=m)?printf("n<x,y,z,m are different"):((x>y&&y==z&&z==m&&m==n)?printf("x>y,z,m,n are equal"):((x>y&&y!=z&&z!=m&&m!=n)?printf("x>y,z,m,n are different"):((y>x&&x==z&&z==m&&m==n)?printf("y>x,z,m,n are equal"):((y>x&&x!=z&&z!=m&&m!=n)?printf("y>x,z,m,n are different"):((z>x&&x==y&&y==m&&m==n)?printf("z>x,y,m,n are equal"):((z>x&&x!=y&&y!=m&&m!=n)?printf("z>x,y,m,n are different"):((m>x&&x==y&&y==z&&z==n)?printf("m>x,y,z,n are equal"):((m>x&&x!=y&&y!=z&&z!=n)?printf("m>x,y,z,n are different"):((n>x&&x==y&&y==z&&z==m)?printf("n>x,y,z,m are equal"):((n>x&&x!=y&&y!=z&&z!=m)?printf("n>x,y,z,m are different"):printf("nothing")))))))))))))))))))));
}
 
   


