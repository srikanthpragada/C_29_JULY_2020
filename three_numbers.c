// Display pass if any two numbers are equals otherwise fail

#include<stdio.h>

void main()
{
    int num1,num2,num3;

    printf("Enter three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1 == num2 || num1 == num3 || num2 == num3)
        printf("Pass");
    else
        printf("Fail");
}
