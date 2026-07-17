#include<stdio.h>
int main()
{
   int tamil,english,math,phy,computer,marks;
   printf("Enter tamil,english,math,phy,computer value:");
   scanf("%d",&tamil);
   scanf("%d",&english);
   scanf("%d",&math);
   scanf("%d",&phy);
   scanf("%d",&computer);
   marks=tamil+english+math+phy+computer;
   printf("sum of tamil,english,math,phy,computer:%d\n",marks);
}
