// Arranging arrays elements int reverse order... temporary method...

#include <stdio.h>
int main()
{
    int a[100], n, i;

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
        printf("elements in reverse ");
        while (n > 0)
        {
            printf("%4d", a[--n]);
        }
    }
}