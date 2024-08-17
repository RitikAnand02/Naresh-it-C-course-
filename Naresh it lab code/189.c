/*
    1

    1 * 2

    1 * 2 * 3

    1 * 2 * 3 * 4
*/

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter rows ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 1; j <= 2*i - 1; j++)
        {
            if (j % 2 == 0)
                printf("*");
            else
                printf("%d", k++);
        }
        printf("\n");
    }
}