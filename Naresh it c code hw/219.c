/*
  1
  3  2
  4  5  6
 10  9  8  7
 11 12 13 14 15
*/

#include <stdio.h>
int main()
{
    int n, r, c, a = 1, b;
    printf("Enter rows ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        b = a + r - 1;
        for (c = 1; c <= r; c++, a++)
        {
            if (r % 2 == 0)
            {
                printf("%3d", b--);
            }
            else
            {
                printf("%3d", a);
            }
        }
        printf("\n");
    }
}