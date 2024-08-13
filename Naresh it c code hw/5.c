#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 3, b;
    b = a++ + a++ + a++;
    printf("a=%d, b=%d\n", a, b);
    a = 3;
    b = ++a + ++a + ++a;
    printf("a=%d, b=%d\n", a, b);
}