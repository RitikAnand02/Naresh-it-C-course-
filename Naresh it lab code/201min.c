/*
Write a C program to find the max element from an array.


Input as :

Enter array size : 5

Enter 5 elements : 4 5 3 6 2

Man element is : 6
*/

#include <stdio.h>
int main()
{
    int a[100], n, i, min;

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
        for (min = a[0], i = 1; i < n; i++)
        {
            if (min > a[i])
                min = a[i];
        }

        printf("min elements=%d ", min);
    }
    return 0;
}