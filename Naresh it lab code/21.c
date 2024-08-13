// 1)Add 1st and Last

// Write a c program to take input of 3 digit number from the user , and add the 1st digit and last digit of that given number

#include <stdio.h>
int main()
{
    int n = 345, a, b, sum;
    n = 345 / 100;
    a = n;
    n = 345 % 10;
    b = n;
    sum = a + b;
    printf("%d", sum);
}