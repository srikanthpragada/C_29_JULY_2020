
#include <stdio.h>

void main()
{
  int num = 156;
  int digit, sum = 0;


       while(num > 0)
       {
          digit = num % 10;  // take rightmost digit
          // printf("%d",digit);
          sum += digit;
          num /= 10;         // remove rightmost digit
       }

       printf("%d", sum);
}
