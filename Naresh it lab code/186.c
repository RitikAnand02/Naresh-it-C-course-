/*
1

1  2   1

1  2   3   2   1

1  2   3   4   3   2   1

1  2   3   4   5   4   3   2   1
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter rows ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int pr_a = i - 1;
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= i)
            {
                printf("%3d ", j);
            }
            else
            {

                printf("%3d", pr_a--);
            }
        }

        printf("\n");
    }
    return 0;
}