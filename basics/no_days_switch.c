// Display no. of days in the given month using switch

#include<stdio.h>
void main()
{
  int month,year, days;

    printf("Enter Month [1-12] :");
    scanf("%d",&month);

    switch(month)
    {
        case 2: printf("Enter year : ");
                scanf("%d",&year);
                if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                    printf("29 days");
                else
                    printf("28 days");
                break;
        case 4:
        case 6:
        case 9:
        case 11:printf("30 days");
                break;
        default:
                printf("31 days");
    }
}
