// Accept a number and display whether it is perfect number

#include<stdio.h>
int main()
{
  int num,i,sum = 0;

    printf("Enter a number  :");
    scanf("%d",&num);

    for(i = 1; i <= num/2 ; i++)
    {
        if(num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("Perfect Number!");
    else
        printf("Not a Perfect Number!");
}
