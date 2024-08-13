//Write a C program to check the number is even or odd by using Switch Case.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a no ");
    scanf("%d", &n);
    switch (n % 2)
    {
    case 0:
        printf("Even");
        break;

    default:
        printf("Odd");
        break;
    }
}
