#include <stdio.h>

void main()
{
   int a[10] = {1,2,3,4,5,6,7,8,9,10}, temp[10];  // create array of 5 ints
   int i,j;

       for(i=0; i < 10; i ++)
       {
         printf("%5d", a[i]);
       }

       printf("\n");

       // copy array a to array temp in reverse order
       for(i=0, j=9; i < 10; i ++, j--)
       {
         temp[j] = a[i];
       }

       // copy temp back to a and print
       for(i=0; i < 10; i ++)
       {
         a[i] = temp[i];
         printf("%5d", a[i]);
       }

}
