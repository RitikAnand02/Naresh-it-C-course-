/*
              1
           2  3  2
        3  4  5  4  3
     4  5  6  7  6  5  4
  5  6  7  8  9  8  7  6  5

*/

#include <stdio.h>
int main()
{
    int n, r, c, s, a;
    printf("Enter no of rows ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (a = r, s = 1; s <= n - r; s++)
        {
            printf("   ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("%3d", a++);
        }
        for (a = a - 2, c = r - 1; c >= 1; c--)
        {
            printf("%3d", a--);
        }
        printf("\n");
    }
    return 0;
}