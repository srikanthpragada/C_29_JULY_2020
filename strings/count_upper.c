#include <stdio.h>

void main()
{
  char s[20];
  int i, count = 0;

     printf("Enter a string :");
     gets(s);

     for(i=0; s[i] != '\0'; i ++)
     {
         if ( isupper(s[i]) )
               count++;
     }

     printf("No. of uppercase letters = %d", count);

}
