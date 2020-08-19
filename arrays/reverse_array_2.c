#include <stdio.h>

void main()
{
   int a[10] = {1,2,3,4,5,6,7,8,9,10};
   int i,j,temp;

       for(i=0; i < 10; i ++)
       {
         printf("%5d", a[i]);
       }

       // copy array a to array temp in reverse order
       for(i=0, j=9; i < j; i ++, j--)
       {
         // swap a[i] with a[j]
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
       }

       printf("\n");
       for(i=0; i < 10; i ++)
       {
         printf("%5d", a[i]);
       }


}
