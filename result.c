// Display result of the exam

#include <stdio.h>

void main()
{
  int marks;

     printf("Enter marks : ");
     scanf("%d",&marks);

     if (marks >= 50)
        printf("Pass");
     else
        printf("Fail");
}
