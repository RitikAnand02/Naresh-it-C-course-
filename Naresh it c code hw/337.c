// Transpose of n*n matrix...

#include <stdio.h>
int main()
{
    int a[10][10], nr, nc, r, c, e, o, z;
    printf("Enter no of rows and columns ");
    scanf("%d%d", &nr, &nc);
    printf("Enter %d integers\n", nr * nc);
    for (r = 0; r < nr; r++)
        for (c = 0; c < nc; c++)
            scanf("%d", &a[r][c]);
    printf("Transposed Elements\n");
    printf("----------------------------------------------------------------------------------------------------------\n");
    for (c = 0; c < nc; c++)
    {
        for (r = 0; r < nr; r++)
        {
            printf("%3d", a[r][c]);
        }
        printf("\n");
    }
    return 0;
}