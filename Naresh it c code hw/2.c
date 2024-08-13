#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    a = printf("I LOVE YOU") == printf("I HATE YOU");
    b = a + printf("\nTHANK YOU\n");
    c = a + b + printf("GOOD BYE\n");
    printf("a=%d b=%d c=%d", a, b, c);
    getch();
}