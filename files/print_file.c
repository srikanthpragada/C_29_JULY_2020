// Display the given file with line numbers

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[30];
  char line[200];
  int lineno = 1;

     printf("Enter filename :");
     gets(filename);

     fp = fopen(filename,"rt");  // read-text
     if(fp == NULL)  // open failed
     {
         printf("Sorry! File [%s] not found. Quitting.", filename);
         exit(1);  // terminate program
     }

     while(!feof(fp))
     {
          fgets(line,200,fp);
          printf("%3d:%s",lineno, line);
          lineno ++;
     }

     // close file
     fclose(fp);

}
