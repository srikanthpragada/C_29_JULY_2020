// Take a number and displays its cube

#include<stdio.h>

void main()
{
   int number,cube;

   printf("Enter a number:");
   scanf("%d",&number);

   // Calculate cube
   cube=number*number*number;

   printf("Cube of %d is %d",number,cube);
}
