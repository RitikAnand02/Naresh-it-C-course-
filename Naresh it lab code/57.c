/*4)Write a program that takes details of an employee from the user, including name, employee ID, designation, and salary. Then, print the details of the employee.

input :
Enter employee name: rohit
Enter employee ID: 101
Enter employee designation: development
Enter employee salary: 25000

output:

Employee Details
Name: rohit
Employee ID: 101
Designation: development
Salary: $25000.00*/

#include <stdio.h>
#include <string.h>
int main()
{
    char name[50], desi[50];
    int id;
    float salary;
    scanf("%s%d%s%f", &name, &id, &desi, &salary);
    printf("name:%s\n designation:%s\n employee id:%d\n salary: $%f", name, desi, id, salary);
}