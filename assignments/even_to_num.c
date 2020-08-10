#include <stdio.h>

void main()
{
 int i, num;

     printf("Enter a number :");
     scanf("%d",&num);

     i = 2;
     while( i <= num)
     {
        printf("%d " ,i);
        i += 2; // i = i + 2
     }
}
