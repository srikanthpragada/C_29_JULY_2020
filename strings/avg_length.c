// Accept 5 strings from user and display the avg length of those strings

#include <stdio.h>

int main()
{
   char st[20];
   int i,total = 0;

      for(i = 1; i <= 5; i ++)
      {
         printf("Enter a string :");
         gets(st);

         total += strlen(st);
      }

      printf("Avg. Length : %.2f", total / 5.0);
}
