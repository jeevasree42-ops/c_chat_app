#include<stdio.h>
int main()
{
   int number;
   printf("enter number values:");
   scanf("%d",&number);
   (number%2==0)?printf("even number"):printf("odd number");
}
