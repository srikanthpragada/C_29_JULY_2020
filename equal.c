// Accept two numbers and display whether they are equal

#include<stdio.h>
void main()
{
 int num1,num2;

   printf("Enter first number  :");
   scanf("%d",&num1);

   printf("Enter second number :");
   scanf("%d",&num2);

   if(num1 == num2)
     printf("Equal");
   else
     printf("Not equal");
}
