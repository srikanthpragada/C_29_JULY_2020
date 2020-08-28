#include <stdio.h>

struct student
{
   char sname[20];
   int marks;
};

main()
{
  struct student marks[5];
  int i, hmpos;

   for(i = 0; i < 5 ; i++)
   {
      // take data from user
      printf("Enter student name: ");
      gets(marks[i].sname);

      printf("Enter marks : ");
      scanf("%d", &marks[i].marks);

      fflush(stdin); // clear keyboard buffer
   }

   // set highest marks position to first position
   hmpos = 0;
   for(i = 1; i < 5; i++)
      if (marks[i].marks > marks[hmpos].marks)
           hmpos = i;

   // display data from hmpos index
   printf("Student %s has got highest marks %d",marks[hmpos].sname, marks[hmpos].marks);
}
