/*


Write a C program that finds pairs in an array whose sum is 15.


Test Data :


Input the size of array : 12

Input 8 elements in the array :

2 4 6 7 8 9 10 11 12 13 14 16


Expected output :

(2, 13)

(4, 11)

(6, 9)

(7, 8)
*/

#include <stdio.h>
int main()
{
    int a[100], i, j, n, s;

    printf("Enter array size 1 - 100 ");
    scanf("%d", &n);

    printf("Enter %d integers ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the pair of sum ");
    scanf("%d", &s);
    for (i = 0; i < n / 2; i++)

        for (j = n - 1; j >= i + 1; j--)
        {

            if (a[i] + a[j] == s)
            {
                printf("[%d , %d]\n", a[i], a[j]);
            }
        }
}
