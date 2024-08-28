// Void / generic pointer...

#include <stdio.h>
int main()
{
    int a = 10;
    float b = 1.2;
    char c = 'X';
    void *p;
    p = &a;
    printf("a=%d\n", *(int *)p);
    p = &b;
    printf("b=%f\n", *(float *)p);
    p = &c;
    printf("c=%c\n", *(char *)p);
    printf("Void ptr size %d bytes", sizeof(p));
    return 0;
}