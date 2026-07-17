#include<stdio.h>
int main()
{
   int amount;
   printf("Enter amount value:");
   scanf("%d",&amount);
   if(amount==375)
   {
      printf("3 note(s)of100\n");
      printf("1note(s)of50\n");
      printf("1note(s)of20\n");
   }
   else
   {
      printf("invalid");
   }
}


