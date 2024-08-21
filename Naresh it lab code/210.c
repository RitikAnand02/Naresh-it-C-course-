/*

Write a C program that rearranges the elements of a given array by moving all the zeros to the front. The program should take an array as input and swap the positions of non-zero elements with zeros, such that all the zeros appear at the beginning of the array, while maintaining the relative order of non-zero elements.


For example:

given the input array: [1, 0, 2, 0, 4, 5, 0, 3, 0]

Expected output:

1 2 4 5 3 0 0 0 0
*/

#include <stdio.h>
int main()
{
    int a[100], i, j, n;

    printf("Enter array size 1 - 100 ");
    scanf("%d", &n);

    printf("Enter %d integers ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] == 0 && a[j + 1] != 0)
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}