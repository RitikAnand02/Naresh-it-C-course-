// write a c program to find max in 2 no without using if else or ternary operator .

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two no:");
    scanf("%d%d", &a, &b);
    a > b &&printf("a is big");
    b > a &&printf("b is big");
    a == b &&printf("both are equal");
}