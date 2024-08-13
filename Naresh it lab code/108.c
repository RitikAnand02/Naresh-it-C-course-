
// Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program.

#include <stdio.h>
int main()
{
    int m;
    printf("Enter the month no:");
    scanf("%d", &m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        printf("31 days");
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        printf("30 days");
    }
    else if (m == 2)
    {
        printf("28 or 29 days");
    }
    else
    {
        printf("invalid months");
    }
}
