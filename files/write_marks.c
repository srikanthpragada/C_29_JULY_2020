// Take marks from user and write them into marks.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  int marks;

     // open for writing
     fp = fopen("marks.txt","wt");  // write-text

     while(1)
     {
         printf("Enter marks [-1 to stop] : ");
         scanf("%d",&marks);

         if (marks == -1)
              break;

         fprintf(fp,"%d\n",marks);
     }

     // close file
     fclose(fp);
}
