// Finding trace of n*n matrix... sum of principal diagonal...

#include <stdio.h>
int main()
{
    int a[10][10], nr, nc, r, c, s = 0;
    printf("Enter no of rows and columns ");
    scanf("%d%d", &nr, &nc);
    if (nr == nc)
    {
        printf("Enter %d integers\n", nr * nc);
        for (r = 0; r < nr; r++)
            for (c = 0; c < nc; c++)
            {
                scanf("%d", &a[r][c]);
                if (r == c)
                {
                    s += a[r][c];
                }
            }
        printf("Trace=%d", s);
    }
    else
    {
        printf("Rows and columns are not same");
    }

    return 0;
}