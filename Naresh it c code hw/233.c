/*
                                   1
                                1  2  1
                             1  2  3  2  1
                          1  2  3  4  3  2  1
                       1  2  3  4  5  4  3  2  1      
                    1  2  3  4  5  6  5  4  3  2  1   
                 1  2  3  4  5  6  7  6  5  4  3  2  1
              1  2  3  4  5  6  7  8  7  6  5  4  3  2  1
           1  2  3  4  5  6  7  8  9  8  7  6  5  4  3  2  1      
        1  2  3  4  5  6  7  8  9 10  9  8  7  6  5  4  3  2  1   
     1  2  3  4  5  6  7  8  9 10 11 10  9  8  7  6  5  4  3  2  1
  1  2  3  4  5  6  7  8  9 10 11 12 11 10  9  8  7  6  5  4  3  2  1

*/

#include <stdio.h>
int main()
{
    int n, r, c, s;
    printf("Enter no of rows ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (s = 1; s <= n - r; s++)
        {
            printf("   ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("%3d", c);
        }
        for (c = r - 1; c >= 1; c--)
        {
            printf("%3d", c);
        }
        printf("\n");
    }
    return 0;
}