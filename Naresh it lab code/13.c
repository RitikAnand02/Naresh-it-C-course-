// write a c program to find a previous multiplication of 100 of a given three digit number only .
// i/p:234 o/p:200

#include <stdio.h>
#include <conio.h>
void main()
{
    int n = 234;
    n % 10 >= 5 && printf("%d", (n / 100) + 1 * 100) || printf("%d", n / 100 * 100);
}