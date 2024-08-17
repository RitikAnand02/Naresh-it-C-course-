// finding no of even/odd/zero elements in given arrays...

#include <stdio.h>
int main()
{
    int a[100], n, i, e, o, z;

    printf("Enter array size 1- 100 ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        printf("Array size 1-100 only ");
    else
    {
        printf("enter %d elements ", n);
        e = o = z = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] == 0)
                z++;
            if (a[i] % 2 == 00)
                e++;
            else
                o++;
        }

        printf("%d even, %d odd, %d zero ", e, o, z);
    }
    return 0;
}
