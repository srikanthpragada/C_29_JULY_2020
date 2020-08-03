// Display total and average marks

#include <stdio.h>

void main()
{
  int maths,english, total;
  float average;

      printf("Enter marks in Maths   :");
      scanf("%d",&maths);

      printf("Enter marks in English :");
      scanf("%d",&english);

      total = maths + english;
      average  = total / 2.0;

      printf("Total = %d, Average = %f", total,average);
}
