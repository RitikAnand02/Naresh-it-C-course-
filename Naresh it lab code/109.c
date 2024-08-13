// Write a C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount. How to the minimum number of notes required for the given amount in C programming. Program to find minimum number of notes required for the given denomination. Logic to find minimum number of denomination for a given amount in C program

#include <stdio.h>
int main()
{
    long int amount, five_hun, hun, fifty, twenty, ten, five, two, one;
    printf("Enter the amount:");
    scanf("%ld", &amount);
    long int amount_copy = amount;
    five_hun = amount / 500;
    amount %= 500;
    hun = amount / 100;
    amount %= 100;
    fifty = amount / 50;
    amount %= 50;
    twenty = amount / 20;
    amount %= 20;
    ten = amount / 10;
    amount %= 10;
    five = amount / 5;
    amount %= 5;
    two = amount / 2;
    amount %= 2;
    one = amount / 1;
    amount %= 1;
    if (amount_copy > amount)
    {
        printf("RS 500=%ld\n", five_hun);
        printf("RS 100=%ld\n", hun);
        printf("RS 50=%ld\n", fifty);
        printf("RS 20=%ld\n", twenty);
        printf("RS 10=%ld\n", ten);
        printf("RS 5=%ld\n", five);
        printf("RS 2=%ld\n", two);
        printf("RS 1=%ld\n", one);
    }
    else
    {
        printf("invalid aoumt");
    }
}