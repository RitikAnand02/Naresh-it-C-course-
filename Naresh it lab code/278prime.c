/*
Check Prime Number
Write a program in C to check whether a number is a prime number or not by using the function.
*/

#include <stdio.h>
int prime(int);
int main()
{
    int n;
    printf("Enter a no ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
int prime(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c == 2)
        printf("The Number %d is a Prime No",n);
    else
    {
        printf("The Number %d is Not a Prime No",n);
    }
}