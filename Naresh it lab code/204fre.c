/*
Write a program in C to count the frequency of each element of an array.

Test Data :

Input the number of elements to be stored in the array :6

Input 6 elements in the array :

element - 0 : 25

element - 1 : 12

element - 2 : 43

element - 3 : 43

element - 4 : 25

element - 5 : 15

Expected Output :

The frequency of all elements of an array :

25 occurs 2 times

12 occurs 1 times

43 occurs 2 times

15 occurs 1 times
*/

#include <stdio.h>
void main()
{
    int a[100], b[100], i, n, c, j;

    printf("Enter array size 1 - 100 ");
    scanf("%d", &n);

    printf("Enter %d integers for a array ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            for (c = 1, j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    b[j] = -1;
                }
            }
            b[i] = c;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (b[i] != -1)
            printf("%d occur %d times\n", a[i], b[i]);
    }
}