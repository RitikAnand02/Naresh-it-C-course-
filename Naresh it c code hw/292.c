// finding max,min array elements...

#include <stdio.h>
int main()
{
    int a[100], n, i, max, min;

    printf("Enter array size 1- 100 ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        printf("Array size 1-100 only ");
    else
    {
        printf("enter %d elements ", n);

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (max = min = a[0], i = 1; i < n; i++)
        {
            if (max < a[i])
                max = a[i];
            if (min > a[i])
                min = a[i];
        }

        printf("min=%d, max=%d ", min, max);
    }
    return 0;
}