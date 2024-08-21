// Dleting dupilcate elements from array...

#include <stdio.h>
void main()
{
    int a[100], i, n, k, j;

    printf("Enter array size 1 - 100 ");
    scanf("%d", &n);

    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (n--, k = j; k < n; k++)
                    a[k] = a[k + 1];
                j--;
            }
        }
    }
    printf("elements are ");
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
}