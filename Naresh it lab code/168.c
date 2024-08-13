/*Write a C program to print square pattern program



  1 6 11 16 21

   2 7 12 17 22

   3 8 13 18 23

   4 9 14 19 24

   5 10 15 20 25
   */

#include <stdio.h>
int main()
{
    int i, j, n, k = 5;
    printf("Enter rows ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
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
  