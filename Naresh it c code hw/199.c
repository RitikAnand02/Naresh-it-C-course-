// 1111
// 2222
// 3333

#include <stdio.h>
int main()
{
    int nr, nc, r, c;
    printf("Enter no of rows and columns ");
    scanf("%d%d", &nr, &nc);
    for (r = 1; r <= nr; r++)
    {
        for (c = 1; c <= nc; c++)
        {
            printf("%d", r);
        }
        printf("\n");
    }
}