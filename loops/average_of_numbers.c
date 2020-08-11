// Program to display average of 5 numbers

#include<stdio.h>

void main()
{
  int i,num,sum = 0;

    for(i=1; i <= 5; i++)
    {
        printf("Enter number : ");
        scanf("%d",&num);
        sum += num;
    }

    printf("Average : %0.2f",sum/5.0);
}
