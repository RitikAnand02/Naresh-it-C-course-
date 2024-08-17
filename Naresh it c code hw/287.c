#include <stdio.h>

int main()
{
    int a[4] = {1, 2}, i;
    a[2] = 3;
    a[3] = 4;
    printf("Elements are ");
    for (i = 0; i < 4; i++)
        printf("%4d\n", a[i]);
    return 0;
}