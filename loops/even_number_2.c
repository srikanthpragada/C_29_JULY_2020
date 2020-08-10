// Print even numbers between two numbers

#include<stdio.h>
void main()
{
    int i,num1,num2;

    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);

    if (num1 % 2 != 0)
        num1 ++;

    for(i = num1; i <= num2 ; i += 2)
    {
       printf("%d ",i);
    }

}
