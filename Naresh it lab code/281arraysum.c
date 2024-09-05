/*
2)Sum of all elements
Create a function to calculate the sum of all elements in an integer array.
Sample Input
Input:

Size of the array: 5

Array elements: 10 20 30 40 50
Sample Output
Output:

Sum of all elements in the array: 150
*/

#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter array size ");
    scanf("%d", &n);
    printf("Enter array %d elements ", n);
    int s = sum(n);
    printf("%d", s);
}
int sum(int n)
{
    int a[100], i, j, s = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        s += a[i];
    printf("Sum of all elements in the array: ");
    return s;
}