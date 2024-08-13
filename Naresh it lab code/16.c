/*4. write a c program to find the next multiple of 10 of a given two digit number , if the given numbers last digit is less than 5 then find the previous multiple of 10
and if the given numbers last digit is greater than or equal to 5 then find the next multiple of 10.
without using if else.*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter no:");
    scanf("%d", &n);
    n % 10 >= 5 && printf("%d", ((n / 10) + 1) * 10) || printf("%d", n / 10 * 10);
}