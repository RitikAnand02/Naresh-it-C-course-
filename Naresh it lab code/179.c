/*
    0

    0 1

    0 1 1

    0 1 1 2

    0 1 1 2 3
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 0, b = 1, c;
        for (int j = 1; j <= i; j++)
        {

            printf("%3d", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }
}