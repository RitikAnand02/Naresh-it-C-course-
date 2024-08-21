// direct initialization of a n*n matrix...

#include <stdio.h>
int main()
{
    int a[2][3] = {9}, r, c;
    a[0][0] = 1;
    a[1][2] = 6;
    printf("Elements ");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%3d", a[r][c]);
        }
        printf("\n");
    }

    return 0;
}