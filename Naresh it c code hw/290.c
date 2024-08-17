// read n elements into arrays and find elements sum and avg mean..

#include <stdio.h>
int main()
{
    float a[100], s = 0;
    int n, i;
    printf("Enter array size 1- 100 ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        printf("Array size 1-100 only ");
    else
    {
        printf("enter %d elements ", n);
        for (i = 0; i < n; i++)
        {
            scanf("%f", &a[i]);
            s = s + a[i];
        }

        printf("Elements sum %.2f and avg=%.2f ", s, s / n);
    }
    return 0;
}