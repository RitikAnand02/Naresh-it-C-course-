/*
  1  3  5  7  9
  1  3  5  7  9
  1  3  5  7  9
  1  3  5  7  9
  1  3  5  7  9
*/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            continue;
        for (j = 1; j <= 10; j++)
        {
            if (j % 2 == 0)
                continue;
            printf("%3d", j);
        }
        printf("\n");
    }

    return 0;
}