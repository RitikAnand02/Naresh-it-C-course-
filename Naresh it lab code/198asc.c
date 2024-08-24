/*
Write a C program to Sort the array in ascending order and print it.


Input as :

Enter array size : 6

Enter 6 element : 4 3 5 6 2 1


Output as :

After sorting in ascending order :

1 2 3 4 5 6
*/

#include <stdio.h>
int main()
{
    int a[100], n, i, j, t;
    printf("Enter array size 1-100 ");
    scanf("%d", &n);
    printf("Enter %d elemnets ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("After Sorting ascending order ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}