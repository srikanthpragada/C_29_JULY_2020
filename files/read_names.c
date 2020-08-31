// Display contents of names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

     fp = fopen("names.txt","rt");  // read-text

     while(1)
     {
         ch = fgetc(fp); // read one char
         if (ch == EOF)
             break;
         putch(ch);
     }

     // close file
     fclose(fp);
}
