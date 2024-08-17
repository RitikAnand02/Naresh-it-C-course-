// reading and printing of array elements...

#include <stdio.h>
int main()
{
    float a[100];
    int n, i;
    printf("Enter array size 1- 100 ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        printf("Array size 1-100 only ");
    else
    {
        printf("enter %d elements ", n);
        for (i = 0; i < n; i++)
            scanf("%f", &a[i]);
        printf("Elements are ");
        for (i = 0; i < n; i++)
            printf("%10.2f", a[i]);
    }
    return 0;
}