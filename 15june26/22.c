#include<stdio.h>
int main()
{
    int n,i,sum;
    i=1,sum=0;
    float avg;
    while(i<=10)
    {
       scanf("%d",&n);
       sum=sum+n;
       i++;
    }
    avg=sum/10.0;
    printf("sum:%d\n",sum);
    printf("avg:%.2f",avg);
}
