#include <stdio.h>

void main()
{
   int a[3][3];
   int i,j,n;

       n = 1;
       for(i=0; i < 3; i ++)
       {
         for(j = 0; j < 3; j ++)
         {
             a[i][j] = n ++;
             printf("%5d", a[i][j]);
         }
         printf("\n");
       }

}
