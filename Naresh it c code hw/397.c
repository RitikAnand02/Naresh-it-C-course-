// Array of pointers...

#include <stdio.h>
int main()
{
    int a = 10, b = 25, c = 18, *p[3], i;
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    for (i = 0; i < 3; i++)
        printf("%c=%d\n", 97 + i, *p[i]);
    return 0;
}