// Pointer compatibility...

#include <stdio.h>
int main()
{
    int a = 100;
    float *p = &a;
    printf("a=%d", *p);
    return 0;
}