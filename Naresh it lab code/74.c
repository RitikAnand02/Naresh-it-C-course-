/*payroll system for a company
Devlop a program on a payroll system for a company. The system needs to calculate the salary of an employee based on their employee type ('M' for manager or 'H' for HR employee) and their basic salary. For managers, their salary should be increased by 5% as a performance bonus. Write a C program that takes the employee type and basic salary as inputs and calculates the increased salary using the ternary operator.



Input as:

---------

Take the input from user -->employee type ('M' for manager, 'H' for HR employee).

Take the input from the user --> basic salary of the employee.



Calculate the increased salary using the ternary operator:*/

#include<stdio.h>
#include<string.h>
int main()
{
    float basic_salary,total_salary, bonus=0.05;
    char type;
    scanf("%f",&basic_salary);
    scanf(" %c",&type);
    bonus = type == 'm'?basic_salary*bonus:0;
    total_salary=basic_salary+bonus;
    printf("%.2f",total_salary);



}