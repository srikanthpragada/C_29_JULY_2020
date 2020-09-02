//  Get details of student with given rollno
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
  int count, rollno, pos;


     fp = fopen("students.dat","r+b");  // write-binary
     if(fp == NULL)  // open failed
     {
         printf("Sorry! File students.dat not opened. Quitting.");
         exit(1);  // terminate program
     }

     printf("Enter rollno :");
     scanf("%d",&rollno);

     pos = (rollno - 1) * sizeof(struct student);

     fseek(fp,pos,SEEK_SET);  // go to required position
     count = fread(&s, sizeof(s), 1, fp);  // read record/block
     if(count == 1)
          printf("%-20s  %3d\n", s.name, s.marks);
     else
          printf("Sorry! Rollno not found!");

     fclose(fp);
}
