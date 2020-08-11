// Accept a number and display factors except 1 and itself

#include<stdio.h>
int main()
{
  int num,i;

    printf("Enter a number  :");
    scanf("%d",&num);

    for(i = 2; i <= num/2 ; i++)
    {
        if(num % i == 0)
            printf("%d ",i);
    }
}
