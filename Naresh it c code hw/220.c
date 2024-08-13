/*
 1  2  3  4  5
  1  2  3  4
  1  2  3
  1  2
  1
*/

#include <stdio.h>
int main()
{
    int n, r, c;
    printf("Enter rows ");
    scanf("%d", &n);
    for (r = n; r >= 1; r--)
    {

        for (c = 1; c <= r; c++)
        {
            printf("%3d", c);
        }
        printf("\n");
    }
}