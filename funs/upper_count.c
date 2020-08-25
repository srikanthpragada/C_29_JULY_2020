# include <stdio.h>

void main()
{
   char st[20];
   int count;

     printf("Enter a string:");
     gets(st);

     // count= upper_count(st);
     // printf("No. of uppercase letters : %d", count);

     count= count_words(st);
     printf("No. of words : %d", count);
}

int upper_count(char s[20])
{
 int i, upper = 0;

     for(i = 0;s[i] != '\0'; i ++)
     {
        if (isupper(s[i]))
             upper ++;
     }
     return upper;
}


int count_words(char s[20])
{
 int i, words = 0;

     for(i = 0;s[i] != '\0'; i ++)
     {
        if (s[i] == ' ')
              words ++;
     }
     return words + 1;
}
