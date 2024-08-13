/*Divisible Or Not
Write a program in C to take two integers as input and print whether the first one is divisible by the second one using if-else statement.
*/

#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    if (n1 % n2 == 0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
}