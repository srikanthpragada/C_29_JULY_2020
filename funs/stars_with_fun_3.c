#include <stdio.h>


void line(int length, char ch)
{
 int i;

    for(i = 1; i <= length; i ++)
       putch(ch);
}

void main()
{
      line(30,'.');
      printf("\nSrikanth Technologies\n");
      line(30,'=');
}
