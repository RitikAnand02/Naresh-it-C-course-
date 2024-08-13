// 1 2  3  4
// 5 6  7  8
// 9 10 11 12

#include <stdio.h>
int main()
{
    int nr, nc, r, c, a = 1;
    printf("Enter no of rows and columns ");
    scanf("%d%d", &nr, &nc);
    for (r = 1; r <= nr; r++)
    {

        for (c = 1; c <= nc; c++)
        {
            printf("%3d", a++);
        }
        printf("\n");
    }
}