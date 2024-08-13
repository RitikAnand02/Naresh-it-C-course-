/*Write a C program to print square pattern program

   1   3   5   7  9

  11 13 15 17 19

  21 23 25 27 29

  31 33 35 37 39
  */

#include <stdio.h>
int main()
{
    int i, j, n, k = 1;
    printf("Enter rows ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%3d", k);
            k += 2;
        }
        printf("\n");
    }
}