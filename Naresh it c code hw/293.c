// finding prime / composite elemnts of array...

#include <stdio.h>
int main()
{
    int a[100], n, i, j, c;

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
            if (a[i] == 1)
            {
                printf("1 not a prime / composite no\n ");
            }
            else
            {
                for (c = 0, j = 1; j <= a[i]; j++)
                {
                    if (a[i] % j == 0)
                        c++;
                }
                if (c == 2)
                    printf("%d prime\n", a[i]);
                else
                    printf("%d composite\n", a[i]);
            }
        }
    }
}