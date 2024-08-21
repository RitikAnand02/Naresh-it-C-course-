// Reading and prinitg elements of a 2d array...

#include <stdio.h>
int main()
{
    int a[10][10], nr, nc, r, c;
    printf("Enter no of rows and columns ");
    scanf("%d%d", &nr, &nc);
    printf("Enter %d integers\n", nr * nc);
    for (r = 0; r < nr; r++)
        for (c = 0; c < nc; c++)
            scanf("%d", &a[r][c]);
    printf("Elements\n ");
    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            printf("%6d", a[r][c]);
        }
        printf("\n");
    }
    return 0;
}