// Display the given file on command line with line numbers

#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char line[200];
  int lineno = 1;

     if(argc < 2)
     {
         printf("Sorry! Filename is missing!");
         exit(1);
     }

     fp = fopen(argv[1],"rt");  // read-text
     if(fp == NULL)  // open failed
     {
         printf("Sorry! File [%s] not found. Quitting.", argv[1]);
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
