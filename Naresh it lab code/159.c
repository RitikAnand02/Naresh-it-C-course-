/*Write a C program to print square pattern program



1 1 1 1 1

2 2 2 2 2

3 3 3 3 3

4 4 4 4 4

5 5 5 5 5
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter rows ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%2d", i);
        }
        printf("\n");
    }
}