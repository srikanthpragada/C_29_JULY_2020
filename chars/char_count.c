
#include <stdio.h>

void main()
{
  char ch;
  int i, upper = 0, other = 0 ;


      for(i=1; i<= 5; i ++)
      {
        printf("\nEnter a char:");
        ch = getche();

        if( isupper(ch) )
              upper ++;
        else
              other ++;
      } // end of for

      printf("\nUpper = %d, Other = %d", upper,other);
}
