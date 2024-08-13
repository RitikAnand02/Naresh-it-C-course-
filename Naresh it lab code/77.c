// Write a c Program to perform logic to check  given number is odd or even using ternary operator

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    num % 2 == 0 ? printf("even") : printf("odd");
}