// Print numbers from the given number to 1

#include<stdio.h>

void main()
{
  int num;

   printf("Enter number :");
   scanf("%d",&num);

   while(num >= 1)
   {
     printf("%d ",num);
     num--;
   }

}
