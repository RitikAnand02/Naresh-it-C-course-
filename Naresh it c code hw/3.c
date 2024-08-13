#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 9, b, c;
    a = a + !a;
    b = !!a;
    c = !!!b;
    printf("a=%d, b=%d, c=%d", a, b, c);
    getch();
}