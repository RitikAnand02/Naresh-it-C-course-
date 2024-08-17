/*

   1 2 3 4 5

   0 3 4 5 6

   0 0 5 6 7

   0 0 0 7 8

   0 0 0 0 9
*/

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter rows ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < i)
                printf("0");
            else
                printf("%d", (i + j) - 1);
        }
        printf("\n");
    }
}