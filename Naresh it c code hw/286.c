#include <stdio.h>

int main()
{
    int a[4] = {'1', '2', '3', 4000000000000}, i;
    printf("Elements are ");
    for (i = 0; i < 4; i++)
        printf("%4d\n", a[i]);
    return 0;
}