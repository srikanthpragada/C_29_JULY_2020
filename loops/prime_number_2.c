// Accept a number and display whether it is a prime number using break

#include<stdio.h>
int main()
{
  int num,i, prime = 1;

    printf("Enter a number  :");
    scanf("%d",&num);

    for(i = 2; i <= num/2 ; i++)
    {
        if(num % i == 0)  // found a factor
        {
           prime = 0;
           break;
        }
    }

    if (prime == 1)
        printf("Prime Number!");
    else
        printf("Not a Prime Number!");
}
