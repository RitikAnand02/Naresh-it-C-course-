/*
 print odd and even elements
1 point

Write a program in C to print separately the  odd and even integers

Test Data :

Input the number of elements to be stored in the array :5

Input 5 elements in the array :

element - 0 : 25

element - 1 : 47

element - 2 : 42

element - 3 : 56

element - 4 : 32

Expected Output :

The Even elements are :

42 56 32

The Odd elements are :

25 47
*/

#include <stdio.h>

void main()
{
    int a[10], i, j, temp, n;

    printf("Enter array size 1 - 10 ");
    scanf("%d", &n);

    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i <= n - 2; i++)
    {
        for (j = 0; j <= n - i - 2; j++)
        {

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            printf("even elements=%4d\n", a[i]);

    for (n--; n >= 0; n--)
        if (a[n] % 2 != 0)
            printf("odd elements%4d\n", a[n]);
}