/*Write a C program that takes two integers as input from the user using scanf, calculates their sum, substraction, multiplication, and division, and then prints these values.

intput -
Enter 1st number
20
Enter 2nd number
10

output

addition = 30
multiplication = 200
substraction = 10
division = 2*/

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    scanf("%d%d", &a, &b);
    c = a + b;
    d = a * b;
    e = a - b;
    f = a / b;
    printf("add=%d\n mul=%d\n sub=%d\n div=%d\n", c, d, e, f);
}