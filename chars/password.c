
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
  int i, upper = 0, digit = 0;
  char ch;

       printf("Enter password :");

       for(i = 1; i <= 8 ; i ++)
       {
          ch = getch();
          putch('*');

          if (isdigit(ch))
              digit = 1;
          else
             if (isupper(ch))
                upper = 1;
       }

       if(upper == 1 && digit == 1)
           printf("\nValid Password");
       else
           printf("\nInvalid Password");
}
