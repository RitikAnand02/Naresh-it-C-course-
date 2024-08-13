/*1)Distribute Salary
Write a c program to calculate the salary and based on that salary calculate the tax for the person

based on their designation by following few rules which are below



* 3 Type of Designation are there name as

 -> Developer

 (Indicated by D or d)

 -> Trainer

 (Indicated by T or t)

 -> Manager

 (Indicated by M or m)



[Note - For wrong designation print a message as "Invalid input".*/

#include <stdio.h>
int main()
{
    char ch;
    int salary, HA = 10000, TA = 1000, FA = 3000;
    float tax, total_salary;
    printf("Enter the designation:");
    scanf(" %c", &ch);
    printf("Enter the salary:");
    scanf("%d", &salary);

    if (ch == 'D' || ch == 'd')
    {
        total_salary = salary + HA;
    }
    else if (ch == 'T' || ch == 't')
    {
        total_salary = salary + HA + FA;
    }
    else if (ch == 'M' || ch == 'm')
    {
        total_salary = salary + HA + FA + TA;
    }
    else
    {
        printf("Invalid Input");
    }
    if (total_salary > 40000)
    {
        tax = total_salary * 10 / 100;
        printf("Tax=%.2f", tax);
    }
    else
    {
        tax = total_salary * 5 / 100;
        printf("Tax=%.2f", tax);
    }
    printf("Total salary  %.2f", total_salary);
    printf("Total salary after tax deduction %.2f", total_salary - tax);
}