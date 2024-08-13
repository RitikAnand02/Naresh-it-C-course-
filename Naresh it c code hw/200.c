// 1234
// 2345
// 3456

#include <stdio.h>
int main()
{
    int nr, nc, r, c;
    printf("Enter no of rows and columns ");
    scanf("%d%d", &nr, &nc);
    for (r = 1; r <= nr; r++)
    {
        int a = r;
        for (c = 1; c <= nc; c++)
        {
            printf("%3d", a++);
        }
        printf("\n");
    }
}