/*
    0

    1 0

    0 1 0

    1 0 1 0

    0 1 0 1 0
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}