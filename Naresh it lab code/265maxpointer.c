/*
Que 1 : Write a program in C to find the maximum number between two numbers using a pointer.
-------

Sample input : first number : 5
               second number : 6

Sample output : 6 is the maximum number.
*/

#include <stdio.h>
int main()
{
    int a, b, *p = &a, *q = &b;
    printf("Enter 1st value ");
    scanf("%d", p);
    printf("Enter 2nd value ");
    scanf("%d", q);
    if (*p > *q)
    {
        printf("%d is the maximum", *p);
    }
    else if (*p < *q)
    {
        printf("%d is the maximum", *q);
    }
    else
    {
        printf("Both are equal");
    }
    return 0;
}