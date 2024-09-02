/*
Que 2 : Write a program in C to add two numbers using pointers.
-------

Sample input : first number : 5
               second number : 6

Sample output : The sum of the entered numbers is : 11
*/

#include <stdio.h>
int main()
{
    int a, b, *p = &a, *q = &b;
    printf("Enter 1st value ");
    scanf("%d", p);
    printf("Enter 2nd value ");
    scanf("%d", q);
    printf("sum=%d", *p + *q);
    return 0;
}