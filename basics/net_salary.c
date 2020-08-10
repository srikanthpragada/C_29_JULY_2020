// Calculate net salary

#include <stdio.h>

void main()
{
  int salary, grade, hra, net_salary;

     printf("Enter salary      : ");
     scanf("%d",&salary);

     printf("Enter grade [1/2] : ");
     scanf("%d",&grade);

     if(grade == 1)
        hra = salary * 0.30;
     else
        hra = salary * 0.50;

     net_salary = salary + hra;

     printf("Salary     : %6d\n",salary);
     printf("+ HRA      : %6d\n",hra);
     printf("             ------\n");
     printf("Net Salary : %6d\n",net_salary);
}
