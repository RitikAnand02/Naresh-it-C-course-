/*Write a C program to print square pattern program

  1 1 2 1 3 1

  1 2 2 2 3 2

  1 3 2 3 3 3

  1 4 2 4 3 4

  1 5 2 5 3 5
  */

#include <stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter row and columns ");
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        int k = 1;
        for (j = 1; j <= m; j++)
        {
            if (j % 2 == 0)
            {
                printf("%3d", i);
            }
            else
            {
                printf("%3d", k++);
            }
        }
        printf("\n");
    }
}