// Print even numbers between two numbers

#include<stdio.h>
void main()
{
    int i,num1,num2;

    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);

    for(i = num1; i <= num2 ; i++)
    {
       if(i % 2 == 0)
           printf("%d ",i);
   }
}
