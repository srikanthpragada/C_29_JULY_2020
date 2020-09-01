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


     fp = fopen("students.dat","wb");  // write-binary
     if(fp == NULL)  // open failed
     {
         printf("Sorry! File students.dat not opened. Quitting.");
         exit(1);  // terminate program
     }

     while(1)
     {
          fflush(stdin);

          printf("Enter name [end to stop]:");
          gets(s.name);

          if(strcmp(s.name,"end") == 0)
               break;

          printf("Enter marks :");
          scanf("%d",&s.marks);

          fwrite(&s, sizeof(s), 1, fp);  // write a block
     }


     // close file
     fclose(fp);

}
