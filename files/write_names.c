// Take names from user and write them into names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  char name[20];

     // open for writing
     fp = fopen("names.txt","at");  // write-text

     while(1)
     {
         printf("Enter name [end to stop] : ");
         gets(name);

         if (strcmp(name,"end") == 0)
              break;

         fprintf(fp,"%s\n",name);
     }

     // close file
     fclose(fp);
}
