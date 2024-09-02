// swapping of two integers in call by value...
#include <stdio.h>
#include <conio.h>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void main()
{
    int a = 5, b = 7;
    printf("Before fun call a=%d, b=%d\n", a, b);
    swap(a, b);
    printf("After fun call a=%d, b=%d", a, b);
    getch();
}