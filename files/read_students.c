// Write students details to students.dat
#include <stdio.h>

struct student
{
  char name[20];
  int marks;
};

void main()
{
  FILE * fp;
  struct student s;
  int count;


     fp = fopen("students.dat","rb");  // write-binary
     if(fp == NULL)  // open failed
     {
         printf("Sorry! File students.dat not opened. Quitting.");
         exit(1);  // terminate program
     }

     while(1)
     {
          count = fread(&s, sizeof(s), 1, fp);
          if (count == 0) // EOF
            break;
          printf("%-20s  %3d\n", s.name, s.marks);
     }


     // close file
     fclose(fp);

}
