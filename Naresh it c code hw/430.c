// swapping of two integers in call by address...
#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
void main()
{
    int a = 5, b = 7;
    printf("Before fun call a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After fun call a=%d, b=%d", a, b);
    getch();
}