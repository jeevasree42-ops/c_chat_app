#include<stdio.h>
int main()
{
   int x,y,z,m,n,o;
   printf("Enter x,y,z,m,n,o values:");
   scanf("%d%d%d%d%d%d",&x,&y,&z,&m,&n,&o);
   (x==y&&y==z&&z==m&&m==n&&n==o)?printf("x,y,z,m,n,o are equal"):((x<y&&y==z&&z==m&&m==n&&n==o)?printf("x<y,z,m,n,o are equal"):((x<y&&y!=z&&z!=m&&m!=n&&n!=o)?printf("x<y,z,m,n,o are different"):((y<x&&x==z&&z==m&&m==n&&n==o)?printf("y<x,z,m,n,o are equal"):((y<x&&x!=z&&z!=m&&m!=n&&n!=o)?printf("y<x,z,m,n,o are different"):((z<x&&x==y&&y==m&&m==n&&n==o)?printf("z<x,y,m,n,o are equal"):((z<x&&x!=y&&y!=m&&m!=n&&n!=o)?printf("z<x,y,m,n,o are different"):((m<x&&x==y&&y==z&&z==n&&n==o)?printf("m<x,y,z,n,o are equal"):((m<x&&x!=y&&y!=z&&z!=n&&n!=o)?printf("m<x,y,z,n,o are different"):((n<x&&x==y&&y==z&&z==m&&m==o)?printf("n<x,y,z,m,o are equal"):((n<x&&x!=y&&y!=z&&z!=m&&m!=o)?printf("n<x,y,z,m,o are different"):((o<x&&x==y&&y==z&&z==m&&m==n)?printf("o<x,y,z,m,n are equal"):((o<x&&x!=y&&y!=z&&z!=m&&m!=n)?printf("o<x,y,z,m,n are different"):((x>y&&y==z&&z==m&&m==n&&n==o)?printf("x>y,z,m,n,o are equal"):((x>y&&y!=z&&z!=m&&m!=n&&n!=o)?printf("x>y,z,m,n,o are different"):((y>x&&x==z&&z==m&&m==n&&n==o)?printf("y>x,z,m,n,o are equal"):((y>x&&x!=z&&z!=m&&m!=n&&n!=o)?printf("y>x,z,m,n,o are different"):((z>x&&x==y&&y==m&&m==n&&n==o)?printf("z>x,y,m,n,o are equal"):((z>x&&x!=y&&y!=m&&m!=n&&n!=o)?printf("z>x,y,m,n,o are different"):((m>x&&x==y&&y==z&&z==n&&n==o)?printf("m>x,y,z,n,o are equal"):((m>x&&x!=y&&y!=z&&z!=n&&n!=o)?printf("m>x,y,z,n,o are different"):((n>x&&x==y&&y==z&&z==m&&m==o)?printf("n>x,y,z,m,o are equal"):((n>x&&x!=y&&y!=z&&z!=m&&m!=o)?printf("n>x,y,z,m,o are different"):((o>x&&x==y&&y==z&&z==m&&m==n)?printf("o>x,y,z,m,n are equal"):((o>x&&x!=y&&y!=z&&z!=m&&m!=n)?printf("o>x,y,z,m,n"):printf("nothing")))))))))))))))))))))))));
}
 
   



