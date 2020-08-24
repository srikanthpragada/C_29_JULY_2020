#include <stdio.h>


int square(int num)
{
   return num * num;
}

int factorial(int n)
{
  int fact = 1;

      for( ; n > 1; n--)
           fact *= n;

      return fact;
}

int sum_of_factors(int n)
{
  int sum=1,i;

      for(i = 2 ; i <= n/2; i++)
      {
         if(n % i == 0)
            sum += i;
      }
      return sum;
}


int nexteven(int n)
{
   return (n % 2 == 0 ? n + 2 : n + 1);
}

// 1 for even, 0 for odd
int iseven(int n)
{
   if (n % 2 == 0)
     return 1;
   else
     return 0;
}


void main()
{
    int res;

        printf(" %d ", nexteven(10));
}
