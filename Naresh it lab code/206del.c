/*
Write a program in C to delete an element at desired position from an array.


Test Data :

Input the size of array : 5

Input 5 elements in the array in ascending order:

element - 0 : 1

element - 1 : 2

element - 2 : 3

element - 3 : 4

element - 4 : 5


Input the position which to delete: 3

Expected Output :

The new list is : 1 2 4 5
*/

#include <stdio.h>
void main()
{
    int a[100], i, n, ele, f = 0, j;

    printf("Enter array size 1 - 100 ");
    scanf("%d", &n);

    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to delete ");
    scanf("%d", &ele);

    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            for (n--, f = 1, j = i; j < n; j++)
                a[j] = a[j + 1];
            i--;
        }
    }
    if (f == 0)
        printf("\n%d not found", ele);

    else
    {
        printf("Elements are ");
        for (i = 0; i < n; i++)
            printf("%4d", a[i]);
    }
}