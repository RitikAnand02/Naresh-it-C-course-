// Develop a C program that takes an integer input and checks whether it is even or odd. Print "Even" if it's even, and "Odd" if it's odd

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)

    {
        printf("even");
    }
if (num % 2 != 0)
    printf("odd");
}