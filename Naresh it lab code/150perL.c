/*Write a C program to check the given number is perfect number or not. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). 



Input as :

Enter a number :28

Output as :

28 is a Perfect Number*/

#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("Enter the no ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (n == s)
    {
        printf("perfect no");
    }
    else
    {
        printf("Not a perfect no");
    }
}