// Print sum of numbers from 1 to 100

#include <stdio.h>

void main()
{
 int i, sum = 0;

     i = 1;
     while(i <= 100)
     {
        sum += i;
        i++;
     }

     printf("Sum of number from 1 to 100 : %d",sum);
}
