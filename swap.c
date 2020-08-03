#include <stdio.h>
void main()
{
    int first,second, temp;

    printf("Enter two numbers :");
    scanf("%d%d",&first,&second);

    temp = first;
    first = second;
    second = temp;

    printf("After swapping %d,%d",first,second);
}
