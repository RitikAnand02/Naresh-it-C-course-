// finding array address...

#include <stdio.h>
int main()
{
    int a[4] = {9, 3, 1, 8}, i;
    for (i = 0; i < 4; i++)
        printf("a[%d] value=%d and addr=%u\n ", i, a[i], &a[i]);

    return 0;
}