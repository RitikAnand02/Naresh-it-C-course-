// direct initialization of a n*n matrix...

#include <stdio.h>
int main()
{
    int a[2][2] = {1, 2, 3, 4}, r, c;
    a[0][2] = 10;
    a[1][2] = 60;
    printf("Elements ");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%6d", a[r][c]);
        }
        printf("\n");
    }

    return 0;
}