#include <stdio.h>

int sum(int a, int b)
{
    printf("User-defined function \n");
    printf("sum => %d ", a + b);
}

void main()
{
    int a = 10;
    int b = 20;

    printf("Pre-defined function\n");
    sum(a, b);
    return;
}