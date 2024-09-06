/*
4)Swap elements
Program to swap all elements of two integer arrays using user define function in C.
Sample Input
Input as :

Enter array size : 6

Enter 6 elements for 1st array : 1 2 3 4 5 6

Enter 6 elements for 2nd array : 7 8 9 0 1 2
Sample Output
After swapping :

1st array : 7 8 9 0 1 2

2nd array : 1 2 3 4 5 6
*/

#include <stdio.h>

void swap(int a[], int b[], int n);

int main()
{
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter %d elements for 1st array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter %d elements for 2nd array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    swap(a, b, n);

    printf("After swapping:\n");
    printf("1st array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n2nd array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

void swap(int a[], int b[], int n)
{
    int temp, i;
    for (i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
