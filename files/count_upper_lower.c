// Count no. of upper and lower case letters in the given file

#include <stdio.h>


void main()
{
  FILE * fp;
  char filename[30];
  int ch, upper = 0, lower = 0;

     printf("Enter filename :");
     gets(filename);

     fp = fopen(filename,"rt");  // read-text
     if(fp == NULL)  // open failed
     {
         printf("Sorry! File %s not found. Quitting.", filename);
         exit(1);  // terminate program
     }

     while(1)
     {
         ch = fgetc(fp); // read one char
         if (ch == EOF)
             break;

         if(isupper(ch))
              upper++;
         else
            if(islower(ch))
               lower++;
     }

     // close file
     fclose(fp);

     printf("No. of uppercase letters = %d, Lowercase letters = %d", upper, lower);
}
