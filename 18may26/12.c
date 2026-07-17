#include<stdio.h>
int main()
{
   int mark;
   char grade;
   printf(" Enter mark:");
   scanf("%d",&mark);
   grade=(mark>=90&&mark<=100)?'a':(mark>=80&&mark<=89)?'b':(mark>=70&&mark<=79)?'c':(mark>=60&&mark<=69)?'d':(mark>=50&&mark<=59)?'e':'f';
   printf("grade %c",grade);
}

