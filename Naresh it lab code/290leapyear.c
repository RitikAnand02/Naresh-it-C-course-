/*
Que 7 : Write a C program to check if a given year is a leap year or not using function.
------

-> create int main() function
-> create bool isLeapYear(int year) function. this function will take year as parameter suppied by main function and will check the year is leap year or not. if year is leap then return true otherwise false.

Sample input : Enter a year: 2024

Sample output : 2024 is a leap year.
*/

#include <stdio.h>
void leap(int n);
int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);
    leap(n);
}
void leap(int n)
{
    if (n % 100 == 0)
    {
        if (n % 400 == 0)
            printf(" %d is a leap year", n);
        else
            printf("% is not a leap year", n);
    }
    else
    {
        if (n % 4 == 0)

            printf("%d is a leap year", n);
        else
            printf("%d  is not a leap year", n);
    }
}