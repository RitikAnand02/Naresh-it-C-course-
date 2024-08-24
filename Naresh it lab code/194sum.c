/*
 Sum of all elements
1 point

Write a program in C to find the sum of all elements of the array.

Input the number of elements to be stored in the array :3

Input 3 elements in the array :

element - 0 : 2

element - 1 : 5

element - 2 : 8

Expected Output :

Sum of all elements stored in the array is : 15
*/


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

        printf("Elements sum %.2f", s);
    }
    return 0;
}