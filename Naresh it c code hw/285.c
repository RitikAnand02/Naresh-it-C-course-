#include <stdio.h>
#define n 4 // macro

int main()
{
    int a[n] = {1, 2, 3, 4}, i;
    printf("Elements are ");
    for (i = 0; i < 4; i++)
        printf("%4d", a[i]);
    return 0;
}