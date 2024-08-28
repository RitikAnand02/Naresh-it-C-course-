// Pointer arthmetic... in this we can't do %, *, /...

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50}, *p = &a[0], i;
    printf("P value = %u\n", p);
    p++;
    printf("%d\n", *p);
    --p;
    printf("%d\n", *p);
    *p++;
    printf("%d\n", *p);
    p = p + 2;
    printf("%d\n", *p);
    ++*p;
    printf("%d\n", *p);
    p = p - 3;
    --*p;
    printf("%d\n", *p);
    printf("Elements ");
    for (i = 0; i < 5; i++)
        printf("%4d", a[i]);

    return 0;
}