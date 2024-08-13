// 3. wirte a c program to add each digit of a given two digit  number.
// i/p:67 o/p:13

#include <stdio.h>
#include <conio.h>
void main()
{
    int n = 67, a, b, c;
    a = n % 10;
    b = n / 10;
    c = a + b;
    printf("%d", c);
}