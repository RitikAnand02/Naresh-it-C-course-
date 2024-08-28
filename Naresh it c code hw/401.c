// Pointer arthmetic... in this we can't do %, *, /...

#include <stdio.h>
int main()
{
    int a = 10, *p = &a, *q;
    q = p;
    puts(p == q ? "equal" : "not equal");
    return 0;
}
