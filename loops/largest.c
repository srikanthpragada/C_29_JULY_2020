// Program to take 5 numbers and display the largest

#include <stdio.h>

void main()
{
 int i,num,largest = 0;

    for(i=1; i <= 5; i++)
    {
       printf("Enter a number:");
       scanf("%d",&num);

       if (num > largest)
          largest = num;
    }

    printf("Largest = %d", largest);
}
