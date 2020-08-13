// Factorial for 5 to 10

#include <stdio.h>

void main()
{
 int n,i,fact;


     for(n = 5; n <= 10; n ++)
     {
         fact = 1;
         for(i = 1; i <= n; i ++)
         {
             fact = fact * i;
         }
         printf("%2d  - %7d\n", n, fact);
     }
}
