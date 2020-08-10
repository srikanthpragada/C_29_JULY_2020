// Count even numbers

#include<stdio.h>
void main()
{
  int num1, num2,i,count=0;

    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);

    for(i=num1; i <= num2; i++)
    {
      if (i % 2 == 0)
         count++;
    }

    printf("Count of even numbers : %d",count);
}
