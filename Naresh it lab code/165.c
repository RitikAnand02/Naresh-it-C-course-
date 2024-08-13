/*Write a C program to print square pattern program

1 2   3    4    5

2 4   6    8   10

3 6   9   12  15

4 8  12  16  20

5 10 15 20  25
*/

#include <stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter row ");
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= m; j++)
        {
            printf("%3d", i * j);
        }
        printf("\n");
    }
}