// 1. write a c program to reverse a two digit no without using any loop .
// i/p:13 o/p:31

#include <stdio.h>
#include <conio.h>
void main()
{
    int n = 13, c = 0, rev;
    c = n % 10;
    n = n / 10;
    rev = c * 10 + n;
    printf("%d", rev);
}