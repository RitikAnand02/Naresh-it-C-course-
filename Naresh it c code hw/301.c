// sorting - Arranging data in a order.. using slection sorting...Descending order...

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
    for (i = 0; i < n - 2; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
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