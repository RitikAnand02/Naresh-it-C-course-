// 1 2 3 4
// 4 3 2 1
// 1 2 3 4

#include <stdio.h>
int main()
{
    int nr, nc, r, c, a = 0;
    printf("Enter no of rows and columns ");
    scanf("%d%d", &nr, &nc);
    for (r = 1; r <= nr; r++)
    {

        for (c = 1; c <= nc; c++)
        {
            if (r % 2 == 0)
            {
                printf("%3d", a--);
            }
            else
            {
                printf("%3d", ++a);
            }
        }
        printf("\n");
    }
}