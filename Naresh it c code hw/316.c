// Arranging array elements in reverse order without using 3rd variable... Permanent arrangement...

#include <stdio.h>
int main()
{
    int a[100], i, n;
    printf("Enter array size 1-100 ");
    scanf("%d", &n);
    printf("Enter %d elements ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++)
    {
        a[i] = a[i] + a[n - i - 1];
        a[n - i - 1] = a[i] - a[n - i - 1];
        a[i] = a[i] - a[n - i - 1];
    }
    printf("Reverse order ");
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);

    return 0;
}
