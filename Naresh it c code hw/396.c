// Double pointer ...

#include <stdio.h>
int main()
{
    int a = 10, *p = &a, **q = &p, ***r = &q;
    printf("%d, %d, %d, %d", a, *p, **q, ***r);
    return 0;
}