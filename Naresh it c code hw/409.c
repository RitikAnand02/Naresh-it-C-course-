// Malloc... in pointers... using free address is giving same...

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, *q;
    p = (int *)malloc(10);
    printf("p=%u\n", p);
    free(p);
    q = (int *)malloc(10);
    printf("q=%u", q);
    return 0;
}