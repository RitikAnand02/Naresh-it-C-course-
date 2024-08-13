// Write a C program to find the maximum between two numbers using Switch statement.

#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two number ");
    scanf("%d%d", &n1, &n2);
    switch (n1 > n2)
    {
    case 1:
        printf("n1 is maximum");
        break;

    default:
        printf("n2 is maximum");
        break;
    }
}