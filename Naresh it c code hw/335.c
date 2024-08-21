// Read n elements to n*n array and find the no of even, odd, zero elements row wise...

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
    printf("\tEven\tOdd\tZero\n");
    printf("----------------------------------------------------------------------------------------------------------");
    for (r = 0; r < nr; r++)
    {
        for (e = o = z = c = 0; c < nc; c++)
        {
            if (a[r][c] == 0)
                z++;
            else if (a[r][c] % 2 == 0)
                e++;
            else
                o++;
        }
        printf("\n%d-row\t %d\t%d\t%d\n", r + 1, e, o, z);
    }
    return 0;
}