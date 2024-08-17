// sorting - Arranging data in a order.. using Bubble sorting...Descending order...

#include <stdio.h>
int main()
{
    int a[100], n, i, j, t;
    printf("Enter array size 1-100 ");
    scanf("%d", &n);
    printf("Enter %d elemnets ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n - 2; i++)
    {
        for (j = 0; j <= n - i - 2; j++)
        {
            if (a[j] < a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("Sorted elements ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}