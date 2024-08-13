// finding array address...

#include <stdio.h>
int main()
{
    float a[4] = {9, 3, 1, 8};
    int i;
    for (i = 0; i < 4; i++)
        printf("a[%d] value=%.2f and addr=%u\n ", i, a[i], &a[i]);

    return 0;
}