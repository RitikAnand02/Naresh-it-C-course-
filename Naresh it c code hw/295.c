// Arranging arrays elements int reverse order... permanent method...

#include <stdio.h>
int main()
{
    int a[100], n, i, t;

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
        for (i = 0; i < n / 2; i++)
        {
            t = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = t;
        }
        printf("Elements in reverse ");
        for (i = 0; i < n; i++)
        {
            printf("%4d", a[i]);
        }
    }
}