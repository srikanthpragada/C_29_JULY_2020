# include <stdio.h>


int count_char(char s[20], char ch)
{
 int i, count = 0;

     for(i = 0;s[i] != '\0'; i ++)
     {
        if (s[i] == ch)
              count ++;
     }

     return count;
}

void main()
{
   int count;

     count = count_char("AbcAbcAAA", 'A');
     printf("Count : %d", count);
}

