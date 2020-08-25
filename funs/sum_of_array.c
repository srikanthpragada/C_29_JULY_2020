
#include <stdio.h>

void main()
{
  int a[10] = {2,3,53,56,36,81,83,77,23,32};
  int total,i;

  // printf("Total = %d",sum(a));

  for(i=0; i< 10; i ++)
  {
    if (isprime(a[i]))
       printf("%d ", a[i]);
  }
}

int isprime(int num)
{
  int i;

     for(i=2; i <= num/2; i ++)
     {
        if(num % i == 0)
           return 0; // not prime
     }

     return 1; // prime
}

int sum(int arr[10])
{
  int total = 0;
  int i;

      for(i=0; i < 10; i ++)
          total += arr[i];

      return total;
}


