// reading and printing of array elements...

#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter array size 1-100 ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        printf("Array size 1-100 only ");
    else
    {
        printf("enter %d elements ", n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        printf("Elements are ");
        for (i = 0; i < n; i++)
            printf("%4d", a[i]);
    }
    return 0;
}