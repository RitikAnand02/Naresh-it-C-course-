// Dangling Pointer...

#include <stdio.h>
int main()
{
    int *p; // bad ptr
    {
        int a = 100; // local var
        p = &a;      // initailized
        printf("addr of p = %d addr of a %d and a=%d\n", p, &a, *p);
    } // a deleted
    printf("a=%d\n", *p); // dangling ptr
    p = NULL;             // NULL pointer
    printf("a=%d", p);

    return 0;
}