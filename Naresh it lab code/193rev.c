/*
 Display Array in Reverse Order
1 point

Write a program in C to read n number of values in an array and display it in reverse order.

Input the number of elements to store in the array :3

Input 3 number of elements in the array :

element - 0 : 2

element - 1 : 5

element - 2 : 7

Expected Output :

The values store into the array are :

2 5 7

The values store into the array in reverse are :

7 5 2
*/

#include <stdio.h>
int main()
{
    int a[100], n, i, t;

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
        for (i = 0; i < n / 2; i++)
        {
            t = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = t;
        }
        printf("Elements in reverse ");
        for (i = 0; i < n; i++)
        {
            printf("%4d", a[i]);
        }
    }
}