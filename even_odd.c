#include <stdio.h>

void main()
{
  int num;

   printf("Enter your number here :");
   scanf("%d",&num);

   if (num % 2 == 0)
      printf("Even");
   else
      printf("Odd");
}
