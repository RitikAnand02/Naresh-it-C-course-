// Half elements in ascending and remaining in descending order:
#include <stdio.h>

void main()
{
    int a[10], i, j, temp, n;

    printf("Enter array size 1 - 10 ");
    scanf("%d", &n);

    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i <= n - 2; i++)
    {
        for (j = 0; j <= n - i - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n / 2; i++)
        printf("%4d", a[i]);
    for (i = n - 1; i >= n / 2; i--)
        printf("%4d", a[i]);
}