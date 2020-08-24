#include <stdio.h>

// user-defined function
void stars()
{
 int i;

    for(i = 1; i <= 25; i ++)
       putch('=');
}

void main()
{
      stars();  // call or invoke function
      printf("\nSrikanth Technologies\n");
      stars();
}
