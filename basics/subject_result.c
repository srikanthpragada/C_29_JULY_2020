#include<stdio.h>

void main()
{
    int marks,subject;

      printf("Enter Marks :");
      scanf("%d",&marks);

      printf("Enter Subject [1/2] :");
      scanf("%d",&subject);


      if (subject==1)
      {
         if(marks >= 60)
            printf("Passed");
         else
            printf("Failed");
      }
      else
      {
        if(marks >= 50)
          printf("Passed");
        else
           printf("Failed");
      }

}
