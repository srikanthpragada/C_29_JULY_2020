
#include <stdio.h>

void main()
{
 int num,sum = 0;

    while(1)
    {
       printf("Enter a number [0 to stop] :");
       scanf("%d",&num);
       if(num == 0)
          break;

       if(num < 0)
          continue;

       sum += num;
    }

    printf("Sum = %d",sum);
}
