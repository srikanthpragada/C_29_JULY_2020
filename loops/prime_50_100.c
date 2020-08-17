// Display prime numbers from 1 to 1000

#include<stdio.h>
int main()
{
  int num,i,prime;


    for(num = 1; num < 1000; num +=2)
    {
      prime = 1;
      for(i = 2; i <= num/2 ; i++)
      {
        if(num % i == 0)
        {
           prime = 0;
           break;
        }
      }  // inner loop

      if(prime)
        printf("%d ",num);
    }

}
