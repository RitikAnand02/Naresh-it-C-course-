#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 29;
    printf("%d\n", a++ / 2);
    printf("%d\n", ++a / 2);
    printf("a=%d\n", a);
    getch();
}