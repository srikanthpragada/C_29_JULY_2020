#include <stdio.h>

// user-defined function
void stars(int length)
{
 int i;

    for(i = 1; i <= length; i ++)
       putch('*');
}

void main()
{
      stars(30);
      printf("\nSrikanth Technologies\n");
      stars(50);
}
