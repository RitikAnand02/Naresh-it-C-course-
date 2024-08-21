// Transpose of n*n matrix... Method-2

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
    printf("Transposed Elements\n");
    printf("----------------------------------------------------------------------------------------------------------\n");
    for (r = 0; r < nc; r++)
    {
        for (c = 0; c < nr; c++)
        {
            printf("%3d", a[c][r]);
        }
        printf("\n");
    }
    return 0;
}