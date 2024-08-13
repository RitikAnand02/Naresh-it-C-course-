/*
Write a C program to print square pattern program



   5 10 15 20 25

   4 9  14 19 24

   3 8  13 18 23

   2 7  12 17 22

   1 6  11 16 21*/

#include <stdio.h>
int main()
{
    int i, j, n, k = 5;
    printf("Enter rows ");
    scanf("%d", &n);
    for (i = 5; i >= 1; i--)
    {
        k = i;
        for (j = 1; j <= n; j++)
        {
            printf("%3d", k);
            k += 5;
        }
        printf("\n");
    }
}