/*Write a C program to generate the Fibonacci sequence up to a given times using a while loop. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. The program should prompt the user to enter a positive integer and then print the Fibonacci sequence up to that number.



Input as:

Enter how many Fibonacci series you want : 9



Output as:

0 1 1 2 3 5 8 13 21*/

#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c, i = 1;
    printf("Enter a no ");
    scanf("%d", &n);
    while (n >= i)
    {
        printf("%d  ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}