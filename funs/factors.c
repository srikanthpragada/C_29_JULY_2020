#include <stdio.h>

void factors(int num)
{
 int i;

    printf("\nFactors of %d :", num);
    for(i = 2; i <= num/2; i ++)
       if (num % i == 0)
           printf("%d ", i);
}

void main()
{
      factors(255);
      factors(150);
}
