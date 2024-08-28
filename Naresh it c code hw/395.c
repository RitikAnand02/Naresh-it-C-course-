// Pointer compatibility...

#include <stdio.h>
int main()
{
    float a = 10.50;
    int *p = &a;
    printf("a=%f", *p);
    return 0;
}