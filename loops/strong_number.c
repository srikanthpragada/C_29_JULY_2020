// Strong number
#include <stdio.h>
void main()
{
  int num = 145, org_num;
  int digit, sum = 0, fact, i;

       org_num = num;
       while(num > 0)
       {
          digit = num % 10;  // take rightmost digit

          // factorial for digit
          fact = 1;
          for(i = 1; i <= digit ; i ++)
          {
             fact *= i;
          }

          sum += fact;
          num /= 10;         // remove rightmost digit
       }

       if (sum == org_num)
           printf("Strong number!");
       else
           printf("Not a strong number!");

}
