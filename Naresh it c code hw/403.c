// Pointer arthmetic... in this we can't do %, *, /...

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50}, *p = &a[0], i;
    printf("P value = %u\n", p);
    *p = p[1]++;
    p[2] = ++p[3];
    p = p + 2;
    p[0] = p[1]++;
    printf("Elements ");
    for (i = 0; i < 5; i++)
        printf("%4d", a[i]);

    return 0;
}