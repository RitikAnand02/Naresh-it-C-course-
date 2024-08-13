// 1234
// 2345
// 3456  m-2..

#include <stdio.h>
int main()
{
    int nr, nc, r, c;
    printf("Enter no of rows and columns ");
    scanf("%d%d", &nr, &nc);
    for (r = 1; r <= nr; r++)
    {

        for (c = r; c <= nc + r - 1; c++)
        {
            printf("%3d", c);
        }
        printf("\n");
    }
}