// finding array value , address position...

#include <stdio.h>
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}}, r, c;
    for (r = 0; r < 2; r++)
        for (c = 0; c < 3; c++)
            printf("a[%d][%d] value=%d, addr=%u\n", r, c, a[r][c], &a[r][c]);
    return 0;
}