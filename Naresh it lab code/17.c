/*2)Reverse A Number

Write a C program to reverse 3 digit number without using any loops.

input :- 786

output:- 687*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int n = 786, c, d, rev;
    c = n % 10;
    n = n / 10;
    d = n % 10;
    n = n / 10;
    rev = c * 100 + d * 10 + n;
    printf("%d", rev);
}