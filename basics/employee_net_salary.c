// Display net salary

#include <stdio.h>
int main()
{
    int salary, hra, da, net_salary, income_tax = 0, gross_salary;

    printf("Enter salary : ");
    scanf("%d", &salary);

    if (salary > 50000)
    {
        hra = salary * 0.30;
        da = salary * 0.20;
    }
    else
    {
        hra = salary * 0.25;
        da = salary * 0.15;
    }

    gross_salary = salary + hra + da;

    if (gross_salary > 100000)
        income_tax = gross_salary * 0.20;


    net_salary = gross_salary - income_tax;

    printf("Salary        : %6d\n",salary);
    printf("+ HRA         : %6d\n",hra);
    printf("+ DA          : %6d\n",da);
    printf("                ------\n");
    printf("Gross         : %6d\n",gross_salary);
    printf("- Income Tax  : %6d\n",income_tax);
    printf("                ------\n");
    printf("Net salary    : %6d\n",net_salary);
}
