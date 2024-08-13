#include <stdio.h>
int main()
{
    int a = 2.5;
    a << 2 + 1 >> 2;
    printf("a=%d\n", a);
    printf("a=%d\n", a << 2 + 1 >> 2);
    printf("a=%d\n", a);
    printf("a=%d\n", a = a << 2 + 1 >> 2);
    printf("a=%d\n", a = a << 2 + 1 >> 2);
}