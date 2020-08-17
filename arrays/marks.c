#include <stdio.h>

void main()
{
   int marks[5];
   int i;

       for(i=0; i < 5; i ++)
       {
         printf("Enter marks :");
         scanf("%d",&marks[i]);
       }

       // Show marks that are > 50

       for(i=0; i < 5; i ++)
       {
         if(marks[i] > 50)
            printf("%d %d\n",i,marks[i]);
       }


}
