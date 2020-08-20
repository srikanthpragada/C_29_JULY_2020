#include <stdio.h>

void main()
{
  char s1[20],s2[20];

     printf("Enter first string  :");
     gets(s1);
     printf("Enter second string :");
     gets(s2);

     printf("First Length = %d, Second Length = %d\n", strlen(s1), strlen(s2));
     printf("strcmp() : %d\n", strcmp(s1,s2));
     printf("Uppercase of first string : %s\n", strupr(s1));


}
