/*
Write a C program to find the min element from an array.


Input as :

Enter array size : 5

Enter 5 elements : 4 5 3 6 2

Min element is : 6
*/

#include <stdio.h>
int main()
{
    int a[100], n, i, max;

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
        for (max = a[0], i = 1; i < n; i++)
        {
            if (max < a[i])
                max = a[i];
                }

        printf("max elements=%d ", max);
    }
    return 0;
}