#include <stdio.h>

void main()
{
   int marks[10];  // create array of 5 ints
   int i,sum =0, avg;

       srand(time(0)); // initialize seed
       for(i=0; i < 10; i ++)
       {
         marks[i] = rand() % 100 ;
         printf("%5d", marks[i]);
         sum += marks[i];
       }

       printf("\n\n");

       avg = sum / 10;
       for(i=0; i < 10; i ++)
       {
         if(marks[i] > avg)
             printf("%5d", marks[i]);
       }



}
