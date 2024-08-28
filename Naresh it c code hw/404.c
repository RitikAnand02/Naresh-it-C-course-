// Bad pointer or wild pointer...

#include <stdio.h>
int main()
{
    int *p; // bad ptr
    printf("p stored addr %u and value in that addr %d", p, *p);
    return 0;
}