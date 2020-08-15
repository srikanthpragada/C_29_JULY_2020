
#include <stdio.h>

void main()
{
  char ch;

       printf("Enter a char:");
       ch = getchar();

       if(ch >= 'A' && ch <= 'Z')
           printf("Uppercase");
       else
          if(ch >= 'a' && ch <= 'z')
            printf("Lowercase");
          else
            printf("Non-alpha char");

}
