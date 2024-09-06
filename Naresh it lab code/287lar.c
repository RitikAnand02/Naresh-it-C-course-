/*
2)Find the Largest Element
Find the Largest Element: Create a program that finds the largest element in an array of integers. Implement separate functions for input, finding the largest element, and main function to displaying the result.
Sample Input
Input as :

Enter array size : 6

Enter 6 elements : 5 6 3 6 7 9
Sample Output
Output as :

The largest element is : 9
*/

#include <stdio.h>
void lar(int n);
int main()
{
    int n;
    printf("Enter array size ");
    scanf("%d", &n);
    printf("Enter %d elements ", n);
    lar(n);
}

void lar(int n)
{
    int a[n], i, max = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        if (a[i] > max)
        {
            max = a[i];
        }
    printf("The largest element is : %d", max);
    return;
}